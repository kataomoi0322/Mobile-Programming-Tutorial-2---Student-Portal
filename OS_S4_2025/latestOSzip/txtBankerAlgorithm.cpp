#include<fstream>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //read from the txt A
    ifstream input("InputTextScenarioA.txt");
    //read from the txt B
    //ifstream input("InputTextScenarioB.txt");
    if(!input){
        cerr << "Erro: cannot open the file";
        return 1;
    }

    int n,m;
    input >> n;  // number of processes
    input >> m;  // number of resources
  
    //determine allocate, max need, available, remainNeed 
    vector<vector <int>> Allocate(n,vector<int>(m));
    vector<vector <int>> MaxNeed(n,vector<int>(m));
    vector<vector <int>> Available(n,vector<int>(m));
    vector<vector <int>> RemainNeed(n,vector<int>(m));
    vector<int> totalResource(m);
    vector<int> work(m);
    vector<int> totalAllocation(m,0);
    
    cout<<"===============\n";
    //read the value of total resource
    for(int i = 0; i < m; i++){
        input>>totalResource[i];
        cout<<totalResource[i]<<",";
    }
    
    
    //read value into allocate matrix
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            input >>Allocate[i][j];
        }
    }

    
    //read value into MaxNeed matrix
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            input >>MaxNeed[i][j];
        }
    }

    //calculate total allocation
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            totalAllocation[j] += Allocate[i][j];
        }
    }
    
    //work - total resource - total allocation
    for(int i = 0; i < m; i++){
        work[i] = totalResource[i] - totalAllocation[i];
    }
    

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            RemainNeed[i][j] = MaxNeed[i][j] - Allocate[i][j];
        }
    }

    //determine boolean for check some specific condition
    vector<bool> status(n,false);
    bool found = false;
    bool CanAllocate = true;
    string sequence;

    for (int count = 0; count < n; count++) {
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            //if already check , skip
            if (status[i]) continue; 
            bool canAllocate = true;

            //check the condition if the remain need is more than
            //work is not allocatable
            for (int j = 0; j < m; j++) {
                if (RemainNeed[i][j] > work[j]) { 
                    canAllocate = false;
                    break;
                }
            }

            if (canAllocate) {
                //take a snapshot for work
                Available[i] = work;

                //work add by allocate
                for (int j = 0; j < m; j++) {
                    work[j] += Allocate[i][j];
                }
                //mark the status to true mean that already check
                status[i] = true;

                //make a safe sequence
                string word = "P" + to_string(i) +"-> ";
                sequence.append(word);
                found = true;
            }
        }
        //if doesn't any thing change, just jump out from loop
        if (!found) break; 
    }

    bool safe = true;
    //check is deadlock or not?
    for(int i : status){
        if(status[i] == false){
            safe = false;
        }

    }
    //output result
    cout << "\n------------\n";
    if(safe){
        cout<<"this is safe\n";
    }else{
        cout<<"this is unsafe\n";
    }
    cout << "\n------------\n";
    for (int j = 0; j < m; j++) cout << totalAllocation[j] << " ";

    cout << "\n------------\n";
    cout << "Processes | Allocation\t| MaxNeed\t|Available\t| RemainNeed\t| status\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i << "        | ";
        for (int j = 0; j < m; j++) cout << Allocate[i][j] << " ";
        cout << "\t| ";
        for (int j = 0; j < m; j++) cout << MaxNeed[i][j] << " ";
        cout << "\t| ";
        for (int j = 0; j < m; j++) cout << Available[i][j] << " ";
        cout << "\t| ";
        for (int j = 0; j < m; j++) cout << RemainNeed[i][j] << " ";
        cout << "\t| ";
        if (status[i] == true){
            cout<< "true";
        }else{
            cout<<"false";
        }
        cout <<"\n";
    }

    cout << "\n------------\n";
    cout << sequence;

    return 0;
}


