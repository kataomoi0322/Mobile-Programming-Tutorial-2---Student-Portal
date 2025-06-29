#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

int main(){
	std::fstream inputfile;
	std::fstream outputfile;
	std::string line;
	std::string name;
	int grade ;
	int sum=0;
	int count=0;
	
//definision all the terms that we need
	
	if(outputfile.eof()){
		outputfile.open("output.txt" , std::ios::app); 
	}
	else{
		outputfile.open("output.txt" , std::ios::out); 
	}

//open the file if the file already exist and does not need create new file
	
	if(!outputfile){
		std::cout<<"ERROR:output.txt open fail"<<"\n";
		return 1;
	}

//decect error when open output file

	inputfile.open("student.txt" , std::ios::in); 
	
	if(!inputfile){
		std::cout<<"ERROR:student.txt cannot open  \n";
		return 1;
	}
	
	std::cout<<"student.txt is sucessful open \n";
	std::cout<<"output.txt is sucessful open \n";
	std::cout<<"now rewrite the output \n";

//open inputfile ,and print out information about already open inputfile or not?

	while (std::getline(inputfile,line)){
		std::stringstream ss(line);
		ss>> name >> grade ;//ss is a output or input but for string only
		outputfile<<"Name:"<<name<<" Grade:"<<grade<<"\n";
		std::cout<<"Name:"<<name<<" Grade:"<<grade<<"\n";
		sum+= grade;
		count++;
		}

//looping to read the data in inputfile and convert to cout and outputfile
//also cout sum and total number in this data

	std::cout<<"sum:"<<sum<<"\n";
	std::cout<<"average:"<<sum/count<<"\n"; 
	outputfile<<"sum:"<<sum<<"\n"<<"average:"<<sum/count<<"\n"; ;
	
//we don't need looping to print out the sum and average so we put it out of while
	
	if(inputfile.eof()){
		inputfile.close();
	}
	std::cout<<"student.txt close. \n";
	
	if(outputfile.eof()){
		outputfile.close();
	}
	std::cout<<"output.txt close. \n";
	
//close all the file 

	return 0;
	
}
