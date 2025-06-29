#include<iostream>
#include<fstream>

using namespace std;

int main (){
	fstream datafile;
	
	if (datafile.eof()){
		datafile.open("testlist.txt",ios::out);
	}
	else{
		datafile.open("testlist.txt",ios::out);
	}
	
	if(!datafile ){
		cout<<"error opening file. \n";
	}
	
	cout<<"File opened sucessfull. \n";
	cout<<"now writing information. \n";
	datafile <<"Jones \n";
	datafile <<"Smith \n";
	datafile <<"Willis \n";
	//datafile <<"David \n";
	
	if(datafile.eof()){
		datafile.close();
	}
	cout<<"done. \n";
		
	return 0;	
	
}
