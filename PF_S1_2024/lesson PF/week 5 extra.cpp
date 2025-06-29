#include<iostream>
using namespace std;

void change ();
int main() {
	change ();
	change ();
	return 0;
}

void change(){
	static int x =0;
	x=x+1;
	cout<<"x IN change value is "<<x<<"\n";
}


