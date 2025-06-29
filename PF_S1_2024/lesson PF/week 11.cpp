#include <iostream>

/*enum Day {
	Monday = 1, //start with 1
	Tuesday,
	Wednesday,
	Thursday,
	Friday = 10, // Custom value 10
	Saturday,
	Sunday
};

int main (){
	Day today = Friday;
	
	std::cout<<"The value if Monday is "<< Monday <<" \n";
	std::cout<<"The value if Tuesday is "<<Tuesday<<" \n";
	std::cout<<"The value if Wednesday is "<<Wednesday<<" \n";
	std::cout<<"The value if Thursday is "<<Thursday<<" \n";
	std::cout<<"The value if Saturday is "<<Saturday<<" \n";
	std::cout<<"The value if Sunday is "<<Sunday<<" \n";
	
	if ( today==Friday ){
		std::cout<<"Today is Friday"<<"\n";
	}
	
	return 0;
}*/

/*enum Trafficlight{
	Red,Yellow,Green
};

void displaylight (Trafficlight light){
	switch (light){
		case Red:
			std::cout<<"stop, the light is red. \n";
			break;
			
		case Yellow:
			std::cout<<"Cation , the light is yellow \n";
			break;
			
		case Green:
			std::cout<<"Go , thr light is Green \n";
			break;
		
		default:
			std::cout<<"Unknown light \n";
	}
}

int main (){
	Trafficlight light = Red;
	displaylight (light);
	
	light = Green;
	displaylight (light);
	
	return 0;
}*/

enum Direction {
	North, East , South , West
};

//example 1
/*int main (){
	Direction dir = North;
	std::cout<<dir<<std::endl;
	
	dir = static_cast<Direction>(dir+1);
	std::cout<<dir<<std::endl;
	
	dir = static_cast<Direction>(dir-1);
	std::cout<<dir<<std::endl;
}*/

//example 2
/*int main (){
	std::string comp;
	
	if (North>West)
	{
		comp="true";
		std::cout<<comp;
	}
	else 
	{
		comp="false";
		std::cout<<comp;
	}
	
	return 0;
}*/

//example 3
int main (){
	Direction dir= North;
	
	for (dir = North; dir <= West; dir = static_cast <Direction>(dir+1)){
		switch (dir){
			case North: 
				std::cout<<"North \n";
				break;
				
			case East:
				std::cout<<"East \n";
				break;
				 
			case South:
				std::cout<<"South \n";
				break;
				
			case West:
				std::cout<<"West \n";
				break;
			default:
			std::cout<<"Unknown direction \n";
		}
	} 
	
	return 0;
}
