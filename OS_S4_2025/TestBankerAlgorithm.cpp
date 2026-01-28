#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    int m = 3;
    vector<vector <int>> Allocate{{0,1,0},
                                  {2,0,0},
                                  {3,0,2},
                                  {2,1,1},
                                  {0,0,2}};
                                  
    vector<vector <int>> MaxNeed{{7,5,3},
                                  {3,2,2},
                                  {9,0,2},
                                  {2,2,2},
                                  {4,3,3}};
    vector<vector <int>> Available(n,vector<int>(m,0));
    vector<vector <int>> RemainNeed(n,vector<int>(m,0));
    vector<int> totalResource{10,5,7};
    vector<int> work(m,0);
    vector<int> totalAllocation(m,0);

    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            totalAllocation[j] += Allocate[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        work[i] = totalResource[i] - totalAllocation[i];
    }
    

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            RemainNeed[i][j] = MaxNeed[i][j] - Allocate[i][j];
        }
    }

    vector<bool> status(n,false);
    bool found = false;
    bool CanAllocate = true;
    string sequence;

    for (int iter = 0; iter < n; iter++) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (status[i]) continue; 

            bool canAllocate = true;
            for (int j = 0; j < m; j++) {
                if (RemainNeed[i][j] > work[j]) { 
                    canAllocate = false;
                    break;
                }
            }

            if (canAllocate) {
                Available[i] = work;

                
                for (int j = 0; j < m; j++) {
                    work[j] += Allocate[i][j];
                }

                status[i] = true;
                string word = "P" + to_string(i) +"-> ";
                sequence.append(word);
                found = true;
            }
        }
        if (!found) break; 
    }

    bool safe = true;

    for(int i : status){
        if(status[i] == false){
            safe = false;
        }

    }

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


