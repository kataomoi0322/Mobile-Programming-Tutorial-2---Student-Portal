#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream inputFile;
	fstream outputFile;
	string input1,input2;
	
	outputFile.open("readmenu.txt",ios::out);
	inputFile.open("menu.txt",ios::in);  
	if (!inputFile){
		cout<<"ERROR! \n";
	}
	
    cout<<"File opened sucessfull. \n";
	cout<<"now reading information. \n";  
	
	//inputfile>>input1>>input2;
	//outputfile<<input1<<input2<<endl;
	
	//either one
	
	getline(inputFile,input1);
	outputFile<<input1<<input2<<endl;
	
	return 0;
}
