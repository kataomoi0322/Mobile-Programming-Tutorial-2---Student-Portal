#include<iostream>
#include<iomanip>	

using namespace std;

int main (){
	string name;
	double hour;
	double SPR;
	
	cout<<"employer ID:"<<"\n";
	cin>>name;
	
	cout<<"total hour work:"<<"\n";
	cin>>hour;
	
	cout<<"Salary per hour:"<<"\n";
	cin>>SPR;

	cout<<"salary:"<<setprecision(5)<<hour*SPR<<"\n";
	return 0;
}
