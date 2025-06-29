#include<iostream>

int main(){
	const double PI=3.142;
	double num1;
	double num2;
	long double result;
	char op;
	 
	bool user = true;
	
	std::cout<<"enter what you want to caculator"<<"\n";
	std::cout<<"a. area of square"<<"\n";
	std::cout<<"b. area of circle"<<"\n";
	std::cout<<"press enter no to end task"<<"\n";
	
	std::cin>> op;
	
	switch (op){
		case'a':
		std::cout<<"enter number 1"<<"\n";
		std::cin>>num1;
		std::cout<<"enter number 2"<<"\n";
		std::cin>>num2;
		result=num1*num2;
		std::cout<<"result"<<result<<"\n";
		std::cout<<"enter what you want to caculator"<<"\n";
		std::cout<<"a. area of square"<<"\n";
		std::cout<<"b. area of circle"<<"\n";
		std::cout<<"c. end the task"<<"\n";
		std::cin>> op;
		case'b':
		std::cout<<"enter radius"<<"\n";
		std::cin>>num1;
		result=num1*num1*PI;
		std::cout<<"result"<<result<<"\n";
		std::cout<<"enter what you want to caculator"<<"\n";
		std::cout<<"a. area of square"<<"\n";
		std::cout<<"b. area of circle"<<"\n";
		std::cout<<"c. end the task"<<"\n";
		std::cin>> op;
		case'n':
		return 0;
		default:
		std::cout<<"press enter a valid operate"<<"\n";
	
	} 

}
