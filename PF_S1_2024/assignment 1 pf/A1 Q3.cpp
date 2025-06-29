#include <iostream>

void SorA();
void checkSymptomatic();
void operater();
float temperature;
int SPO2 ;
char op, sa;

int main(){
	SorA();
	
}

void SorA(){
	std::cout<<"please enter 1 or 2 \n";
	std::cout<<"1. Symptomatic \n";
	std::cout<<"2. Asymptotic \n";
	std::cin>> sa;
	switch (sa){
		case '1':
		checkSymptomatic();
		break;
		
		case '2':
		std::cout<<"You are normal. Please keep your social distancing and Stay at home \n";
		operater();
		break;
			
		default:
		SorA();
		break;
	}
	
}

void checkSymptomatic(){
	std::cout<<"Press enter temperature \n";
	std::cin>> temperature;
	std::cout<<"Press enter SPO2 reading \n";
	std::cin>> SPO2;
	if (temperature > 37.5 && SPO2 <=95){
		std::cout<<"Please go to the near Covid Assessment Centre(CAC) \n";
		operater();
	}
	else if (temperature > 37.5 || SPO2 <=95){
		std::cout<<"Please do Swab test or saliva test \n";
		operater();
	}
	else if (temperature<= 37.5 && SPO2 <=95){
		std::cout<<"You are normal. Please keep your social distancing and Stay at home \n";
		operater();
	}
	else if (temperature<= 37.5 && SPO2 >=95){
		std::cout<<"You are normal. Please keep your social distancing and Stay at home \n";
		operater();
	}else {
		std::cout<<"ERROR:Are You HUMAN ??? \n"; // looping error
		operater();
	}
}

void operater(){
	std::cout<<"countinue ?(y/n)"<<"\n";
	std::cin>>op;
	switch(op){
		case'y':
		SorA();
		break;
		
		case'n':
		break;
		
		default:
		return operater();
		std::cout<<"PLease enter y or n"<<"\n";
		break;
	}
	
}


