#include<iostream>

int main(){
	int x;
	
	std::cout<<"press enter a number:";
	std::cin>>x;
	
	for(int i=1;i<=10;i++){
		std::cout<<x<<" X "<<i<<" = "<<i*x<<"\n";	
	}
	
	return 0;
}
