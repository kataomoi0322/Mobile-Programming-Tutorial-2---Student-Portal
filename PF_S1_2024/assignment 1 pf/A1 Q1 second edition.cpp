#include <iostream>

void calculatorFee();
void operater();
float hour , fee;
char op;


int main (){
	calculatorFee();
}

void calculatorFee(){
	std::cout<<"hour that customer in cark park:"<<"\n";
	std::cin>>hour;
	fee = (hour * 1.2);
	std::cout<<"Total parking ticket:"<< fee <<"\n";
}

void operater(){
	std::cout<<"countinue ?(y/n)"<<"\n";
	std::cin>>op;
	switch(op){
		case'y':
		calculatorFee();
		break;
		
		case'n':
		break;
		
		default:
		return operater();
		std::cout<<"PLease enter y or n"<<"\n";
		break;
	}
}
