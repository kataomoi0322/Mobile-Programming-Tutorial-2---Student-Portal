#include<iostream>

int main(){
	char op;
	long double num1;
	long double num2;
	long double result;
	
	std::cout <<"calculator"<<"\n";
	std::cout <<"please press either + - * /"<<"\n";
	std::cin >>op;

	switch(op){
		case '+':
		std::cout<<"please enter frist number"<<"\n";
		std::cin >>num1;
		std::cout<<"please enter second number"<<"\n";
		std::cin >>num2;
		result=num1+num2;
		std::cout<<"answer"<<result<<"\n";
		break;
		case'-':
		std::cout<<"please enter frist number"<<"\n";
		std::cin >>num1;
		std::cout<<"please enter second number"<<"\n";
		std::cin >>num2;
		result=num1-num2;
		std::cout<<"answer"<<result<<"\n";
		break;
		case'*':
		std::cout<<"please enter frist number"<<"\n";
		std::cin >>num1;
		std::cout<<"please enter second number"<<"\n";
		std::cin >>num2;
		result=num1*num2;
		std::cout<<"answer"<<result<<"\n";
		break;
		case '/':
		std::cout<<"please enter frist number"<<"\n";
		std::cin >>num1;
		std::cout<<"please enter second number"<<"\n";
		std::cin >>num2;
		result=num1/num2;
		if (num1==0||num2==0){
			result=0;
		}
		std::cout<<"answer"<<result<<"\n";
		break;
		default:
		std::cout<<"please enter valid operate"<<"\n";
		break;
	}
	
	
	return 0;
}
