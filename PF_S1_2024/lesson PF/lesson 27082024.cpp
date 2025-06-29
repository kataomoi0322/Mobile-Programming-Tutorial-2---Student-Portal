#include<iostream>

int main (){
	int a ,i=0;
	
	//counter
	/*while(i<=20){
		std::cout<<i<<"\n";
		i=i+=2;
	}*/
	
	//counter-controlled while loops
	/*std::cout<<"initial value of i:"<<i<<"\n";
	while (i<=20){
		std::cout<<"number added:";
		std::cin>>a;
		i=i+a;
		std::cout<<i<<"\n";
	}*/
	
	//sentinel-controlled while loops
	std::cout<<"initial value of i:"<<i<<"\n";
	while (a!=-1){
		std::cout<<"number added:";
		std::cin>>a;
		i=i+a;
		std::cout<<i<<"\n";
	}
	
	//flag-control while loops
	/*int counter=5;
	bool keepcounting=true;
	while(keepcounting){
		std::cout<<"counter"<<counter<<"\n";
		counter--;
		
		if(counter==0){
			keepcounting=false;
		}
	}
	std::cout<<"done counting down!"<<"\n";*/
	
	//while looping 1. counter 2.sentinel 3.flag
	
	
	
	return 0;
}
