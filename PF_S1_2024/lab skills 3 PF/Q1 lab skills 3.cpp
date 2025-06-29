#include<iostream>

int main(){
	double num;
	
	std::cout<<"press enter a number:";
	std::cin>>num;
	
	for(int i=0;i<num;i+=2){
		std::cout<<i<<",";	
	}
	
	return 0;
}
