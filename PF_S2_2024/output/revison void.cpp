#include <iostream>

void greet(){
	std::cout<<"greet \n";
	exit(0);// end entire terminal 
} 

int main(){
	greet();
	std::cout<<"this will not show in terminal";
	return 0;
}
