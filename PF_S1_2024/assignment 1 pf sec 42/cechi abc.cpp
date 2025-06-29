#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>

void greeting(const std::string &greet);
void account(const std::string &greet);
bool valid(std::string &accNumber, std::string &pin);
void balance(const std::string &greet);
void deposit(const std::string &greet);
void withdrawal(const std::string &greet);


std::string greet;
std::string fullName;
std::string accType; 
std::string number; 
std::string pin;
std::string accNumber;
int random;
double amount;
bool hasAccount = true;
bool choice = false;

int main(){
	char op;
	srand(time(0));
		
	do{
		std::cout<<"\n************Welcome to Wealthy Bank************"<<"\n";
		std::cout<<"please select an action:"<<"\n";
		std::cout<<"(A) Create account"<<"\n";
		std::cout<<"(B) Check Balance "<<"\n";
		std::cout<<"(C) Deposit"<<"\n";
		std::cout<<"(D) Withdrawal "<<"\n";
		std::cout<<"(E) Exit "<<"\n";
		std::cout<<"Your Choice:"<<"\n";
		std::cin>>op;
		
		
		switch (op){
		case 'a':
		case 'A':
			greet = "create an account ";
			account(greet);
			//choice = true;
			break;
			
		case 'b':	
		case 'B':
			
			greet = "check account balance ";
			balance(greet);
			break;
			
		case 'c':	
		case 'C':
			
			greet = "make deposit ";
			deposit(greet);
			break;
			
		case 'd':	
		case 'D':
			
			greet = "make withdrawal ";
			withdrawal(greet);
			break;
			
		case 'e':	
		case 'E':
			
			return 0;
			break;
			
		default:
			std::cout<<"pleasa enter a valid operater:"<<"\n";
			break;
	}
	}while (choice == false);
}



void greeting(const std::string &greet){
	std::cout<<"************Thank for choosing Wealthy Bank************"<<"\n";
	std::cout<<"To "<<greet<<", please provide the information"<<"\n";
	
	
}

void account(const std::string &greet){ 
	
	greeting(greet);
	
	
	std::cout<<"please enter account holder full name \n";
	std::cin.ignore();
	std::getline(std::cin,fullName);
	
	std::cout<<"please initial deposit amount \n";
	std::cin>> amount ; 
	
	std::cout<<"please enter account type (saving or account)\n";
	std::cin>> accType ; 
	
	std::cout<<"please enter contact number \n";
	std::cin>>  number;
	
	std::cout<< "please enter 6 digit safety pin \n";
	std::cin>>  pin;
	
	std::cout<< "your account number is ";
	random = (rand()%90000+10000);
	
	random = (rand() % 90000 + 10000);
    std::stringstream ss;
    ss << random;
    accNumber = ss.str();
	
	std::cout<<accNumber<<"\n";
	
	valid(accNumber,pin);
	
	
}

bool valid(std::string &accNumber, std::string &pin) {
    std::string Vpin;
    std::string Vacc;
  	int attempt =0;
  	const int maxattempt =3;

    std::cout << "Now starting to verify your account...\n";
    std::cout << "Please enter your account number: \n";
    std::cin >> Vacc;
	while (maxattempt>attempt){
		if (Vacc == accNumber) {
        std::cout << "Please enter your pin: \n";
        std::cin >> Vpin;
			if (Vpin == pin) {
            std::cout << "Success! Account and pin are correct.\n";
            return true;} 	
			else {std::cout << "Incorrect pin. Please try again.\n";}}
		else {std::cout << "Invalid account number. Please try again.\n";}
		attempt++;
		std::cout << "You have " << (maxattempt - attempt) << " attempt(s) left.\n";
	}
	std::cout << "Maximum attempts reached. Verification failed.\n";
    return false; 
}


void balance(const std::string &greet){
	greeting(greet);
	std::cout<<"test";
	
}

void deposit(const std::string &greet){
	greeting(greet);
	std::cout<<"test";
	
}

void withdrawal(const std::string &greet){
	greeting(greet);
	std::cout<<"test";
	
}
