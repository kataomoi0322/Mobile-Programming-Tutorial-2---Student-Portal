//team member
// Ngoo Jun Yu
// Lee Xuan Hui
// Kirthana a/p Gunasegaran
// Nur Azhani Hannani

#include <iostream>


enum car{
	Sedan=1, SUV=2, Truck=3, Coupe=4
};

void printCarType(car type){

		
		switch (type){
			case Sedan: 
				std::cout<<"Car type : Sedan \n";
				
				break;
				
			case SUV:
				std::cout<<"Car type : SUV \n";
				break;
				 
			case Truck:
				std::cout<<"Car type : Truck \n";
				break;
				
			case Coupe:
				std::cout<<"Car type : Coupet \n";
				break;
			default:
			std::cout<<"Unknown car \n";
		}
	
	
}

class detail {
	private :
		car type;
		double price;
		std::string feature[3];
		
	public :
	
	
	detail(car t,double p,  std::string warna , std::string jenis , std::string seat){
		type = t;
		price = p;
		feature[0] = warna;
		feature[1] = jenis;
		feature[2] = seat;
	}
		
	double getprice(){
		return price;
	}
	
	void getprice(double p){
		price = p;
	}
	

	void displayinfo(){
		printCarType(type);
		std::cout<<"price: "<< price <<"\n";
		std::cout<<"feature: "<<  feature[0] <<feature[1] <<feature[2]<<"\n";
	}
};



void increaseprice(double *price){
	for (int i = 0 ; i < 4 ; i++) {
        price[i] *= 1.10;
        
    }
}

int main (){
	double price[4] = {22000,28000, 25000, 23000 };
 	 detail carDetails[4] = {
        detail(Sedan, 22000, "Red,", "V4 Engine,", "Basic Stereo"),
        detail(SUV, 28000, "Black,", "V6 Engine,", "Sunroof"),
        detail(Truck, 25000, "White,", "V8 Engine,", "Towing Package"),
        detail(Coupe, 23000, "Blue,", "V4 Engine,", "Sports Seats")
    };
    
    std::cout << "Original Car Details : " << "\n";
	for (int i = 0 ; i < 4 ; i++) {
        carDetails[i].displayinfo();
    }
	
	increaseprice(price);
	
	std::cout << "Updated Car Details(After 10%) : " << "\n";
	for (int i = 0 ; i < 4 ; i++) {
        carDetails[i].getprice(price[i]);
    }
    
    for (int i = 0 ; i < 4 ; i++) {
       carDetails[i].displayinfo();
    }

	
	return 0;
}
