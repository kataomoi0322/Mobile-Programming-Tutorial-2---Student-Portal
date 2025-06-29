#include <iostream>

void calculateBMI();
void checkBMI(float bmi);
void operater();

float weight, height, bmi;
char op;

int main() {
	calculateBMI();
	return 0;
}

void calculateBMI(){
	std::cout<<"weight(kg):";
	std::cin>>weight;
	std::cout<<"height(m):";
	std::cin>>height;
	bmi= weight / (height * height);
	std::cout <<"Your bmi is "<<bmi<<"\n";
	checkBMI(bmi);
}

void checkBMI(float bmi){
	if (bmi < 19) {
        std::cout << "underweight"<<"\n";
    }else if(bmi >= 19 && bmi <25){
        std::cout << "normal"<<"\n";
    }else if(bmi >= 25 && bmi <=30){
        std::cout << "Overweight"<<"n";
    }else {
        std::cout << "Obese\n";
    }
    operater();
}

void operater(){
	std::cout<<"countinue ?(y/n)"<<"\n";
	std::cin>>op;
	switch(op){
		case'y':
		calculateBMI();
		break;
		
		case'n':
		break;
		
		default:
		return operater();
		std::cout<<"PLease enter y or n"<<"\n";
		break;
	}
	
	
}


