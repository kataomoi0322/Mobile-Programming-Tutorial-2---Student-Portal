#include<iostream>
using namespace std;
/*void showWelcome;

int main(){
	showWelcome();
	return 0;
}

void showWelcome(){
	cout<<"welcome to tht greatest show;"
}*/
//cout sample

void convertTometre(float km);

int main(){
	float km;
	cout<<"Enter distance in km:";
	cin>>km;
	convertTometre(km);
	return 0;
}

void convertTometre(float km){
	float metre;
	metre=km*1000;
	cout<<km<<"km is equal to:"<<metre<<"m";
}
//convert sample

/*void changeValue(int &x); // &x passby value  

int main(){
	int x;
	x = 80;
	cout<<"x before change value is "<<x<<"\n";
	changeValue(x);
	cout<<"x after change value is "<<x<<"\n";
	return 0;
}

void changeValue (int &x){
	x = x+10;
	cout<<"x IN change value is "<<x<<"\n";
}*/
//change value

/*void change ();
int main() {
	change ();
	change ();
	return 0;
}

void change(){
	static int x =0;// static is to use the value before it 
	x=x+1;
	cout<<"x IN change value is "<<x<<"\n";
}*/


