#include <iostream>

void an (std::string &flyer);

int main (){
	std::string flyer;
	std::cout<<"press enter a word";
	std::cin>>flyer;
	
	an (flyer);
	
	return 0;
}

void an (std::string &flyer){
	std::cout<<flyer;
}
