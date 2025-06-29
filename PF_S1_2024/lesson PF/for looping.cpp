#include <iostream>

using namespace std;

int main(){
	//
	//int number;
	
	int number,i=1;
	//ask user to enter a number
	cout <<"press enter a number"<<"\n";
	cin >> number;
	
	for(int i=1;i<=10;i++){
		cout<<number<<" x "<<i<<" = "<<number*i<<"\n";
	}
	
	//generate the multiplication table using for loop
	/*for(int i=10 ; i>=1; i--){
		cout<<number<<" x "<<i<<" = "<<number*1<<"\n";
	}*/
	
	//do...while
	/*do {
		cout<<number<<" x "<< i<<" = "<<number*i<<"\n";
		i++; 
	}while (i<=10);*/
	
	
	return 0;
}
