#include <iostream>

class car{
private:
	std::string brand;
	int year;
	
public:
	//default Constructor
	car(){
		brand = "Unknown";
		year = 0;
	}
	
	//parameterized constuctor
	car(std::string b, int y){
		brand = b;
		year = y;
	}
	
	//Accssor (Getter) for brand
	std::string getBrand(){
		return brand;
	}
	
	//Mutator (setter) for brand
	void setbrand(std::string b){
		brand = b;
	}
	
	int getYear (){
		return year;
	}
	
	void setyear(int y){
		year = y;
	} 
	
	void displayinfo(){
		std::cout<<"Brand: "<<brand<<" ,year: "<<year<<"\n";
	}
};

int main(){
	//using the default constructor
	car mycar1;
	std::cout<<"Default constructor values:"<<"\n";
	mycar1.displayinfo();
	
	//using the parameterized consturctot
	car mycar2;
	std::cout<<"\nparameterized constructir values:  \n";
	mycar2.displayinfo();
	
	//modlyfing attributes using getters
	mycar2.setbrand("honda");
	mycar2.setyear(2021);
	
	//accessing modlying attributes using getters
	std::cout<<"\nafter using setters: \n";
	std::cout<<"updated brand: "<<mycar2.getBrand()<<"\n";
	std::cout<<"updated year: "<<mycar2.getYear()<<"\n";;
	
	//display updated
	mycar2.displayinfo();
	
	return 0;
} 
