#include<iostream>

int main(){
	int i,a=0;
	int result;
	
	do{
		std::cout<<"\n"<<"press enter a positif number."<<"\n";
		std::cin>>a;
		i=i+a;
		std::cout<<"Sum of the number:"<<i;
		if (!a||a<0){
			break;
		}
	}while(a>-1);
	
	return 0;
}





