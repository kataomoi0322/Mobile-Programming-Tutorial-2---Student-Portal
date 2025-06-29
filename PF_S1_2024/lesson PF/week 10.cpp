#include <iostream>

using namespace std;

/*void increment (int *p){
	*p = *p +1;
}

int main (){
	int number =10; 
	cout <<"before increment:"<<number<<"\n";
	
	increment(&number);
	
	cout<<"after increment:"<< number <<"\n";
	return 0;
}*/

/*int main(){
	//dynamically allocate memory for an interger 
	int *p = new int; //allocates memory for an interger
	*p=42; //assign a value  to the dynamiically allocated memory
	cout<<"dynamically allocate value:"<<*p<<endl;
	
	delete p;
	return 0;	

}*/

/*int main (){
	int size;
	cout<< "enter the size of the array:";
	cin>>size;
	
	//dynamically allocate memory for an array
	int *arr = new int[size];
	
	//assign values and print the array
	for (int i=0;i<size;i++){
		arr[i]=i+1;// assign values to the array
		cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
	}
	delete[]arr; //freee the dynamically allocated array memory
	return 0;
		
}*/

//function that returns a pointer to a dynamically allocated array
int* createArray(int size){
	int *arr = new int[size]; //dynamically allocate memory for the array
	
	//intialize the array
	for (int i=0;i<size;i++){
		arr[i]=i+2;// assign values to the array
		
	}
	
	return arr;
	
}

int main (){
	int size =5;
	
	//get the pointer to the dynamically allocated array
	int *arr = createArray(size);
	
	//print the array
	for (int i=0;i<size;i++){
		
		std::cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
	}
	delete[]arr; //freee the dynamically allocated array memory
	return 0;
	
} 
