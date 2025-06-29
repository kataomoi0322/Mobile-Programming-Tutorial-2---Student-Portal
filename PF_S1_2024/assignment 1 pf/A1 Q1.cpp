#include <iostream>
void calculateParkingFee();
float hour , money;
float fee=1.2;
char op;
bool terus(true);

int main(){
	

	calculateParkingFee();
	std::cout<<"countinue calclulate?(y/n)"<<"\n";
	std::cin>>op;
	
	do switch(op){
		case 'y':
		calculateParkingFee();
		std::cout<<"countinue calclulate?(y/n)"<<"\n"; // continue got problem
		std::cin>>op;
		break;
		
		case'n':
		return 0;
		break;
		
		// looping error
		default:
		std::cout<<"yes or no?"<<"\n";
		std::cin>>op;
		break;
		
	} while(terus==true);
	
} 

void calculateParkingFee(){
	std::cout<<"hour that customer in cark park:"<<"\n";
	std::cin>>hour;
	money= (hour * fee);
	std::cout<<"Total parking ticket:"<<money<<"\n";
}
