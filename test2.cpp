#include <iostream>
#include <string>

void countdown(int n){
	if(n == 0){
		std::cout << "done" << std::endl;
	}
	std::cout << n << std::endl;
	if (n == -2){
		return;
	}

	countdown(n-1);
}

int main(){
	countdown(5);
	return 0;

}