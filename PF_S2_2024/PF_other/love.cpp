#include<iostream>
#include<string>

const bool love(true);
// const = never change 
int main(){
	
	char answer;
	std::cout<<"WOULD YOU MARRY ME??\n";
	std::cin>>answer;
	
	do switch(answer){
		case'n'://first letter of no
		std::cout<<"WOULD YOU MARRY ME??\n";
		std::cin>>answer;
		break;
		
		case'y'://first letter of yes 
		while(love==true){
			(std::cout<<"i love you");
		}
		break;
		
		default:
		std::cout<<"yes or no?"<<"\n";
		std::cin>>answer;
		break;
	}while (love==true);

	return 0;
}
