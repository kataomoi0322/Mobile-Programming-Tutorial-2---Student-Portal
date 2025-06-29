#include <iostream>

int main() {

   /* // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address         

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout <<"\033[31m" << *pFreePizzas  <<'\n';

    return 0;*/
    
    //adderes of operator(&)
    /*int num = 10;
	std::cout<<"Value of num"<<num<<"\n";
    std::cout<<"adress of num:"<<&num <<"\n";
    return 0;*/
    
    /*int num = 10;
    int *ptr = &num;//*ptr is declare pointer and &ptr is initialize with the addres of num
    
    std::cout<<"Value of num:"<<num <<"\n";
    std::cout<<"adress of num:"<<ptr <<"\n";
    std::cout<<"Value at the address stored in the prt" <<"\n";
    return 0;*/ 
    
    /*int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    
    for(int i=0; i<5; i++){
    	std::cout<<"element at index "<< i <<" :"<< *(ptr +i)<<"\n";//pointer arithmetic
	}*/
	
	/*int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    
    std::cout<<"Pointer at start:" <<ptr<<"\n" ;
    ptr++;
    std::cout<<"Pointer after increment:"<<ptr<<"\n";
    std::cout<<"Value at new pointer location: "<<*ptr<<"\n";

	return 0;*/
	
	int arr[5] = {10,20,30,40,50};
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[4]; 
	
	if (ptr1<ptr2){
		std::cout<<"ptr1 pointer to an earlier element than ptr2"<<"\n";
	}else{
		std::cout<<"ptr1 pointer to an later element than ptr2"<<"\n";
	} 
    
    
}
