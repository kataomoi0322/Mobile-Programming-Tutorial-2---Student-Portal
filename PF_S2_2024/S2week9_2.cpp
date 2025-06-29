#include<iostream>
#include<fstream>

int main(){
    std::string name, id,line;
    float cgpa;
    double sum;
    int count;
    std::ofstream file("student.txt",std::ios::out|std::ios::app);

    std::cout << "please enter your name: ";
    std::cin>>name;
    std::cout << "please enter your id: "; 
    std::cin>>id;
    std::cout << "please enter your cgpa: ";
    std::cin>>cgpa;
    std::cout << "student's information saved successfully" << std::endl;

    file<<"Name:"<<name<<"\n"
        <<"ID:"<<id<<"\n"
        <<"CGPA:"<<cgpa<<"\n";
    file.close();
    std::ifstream fileread("student.txt",std::ios::in);
    while(std::getline(fileread,line)){
        std::cout<<line<<std::endl;
    }
    fileread.close();
    file.open("student.txt",std::ios::out|std::ios::app);
    std::cout << "please enter your name: ";
    std::cin>>name;
    std::cout << "please enter your id: ";
    std::cin>>id;
    std::cout << "please enter your cgpa: ";
    std::cin>>cgpa;
    std::cout << "student's information append successfully" << std::endl;
    
    file<<"Name:"<<name<<"\n"
        <<"ID:"<<id<<"\n"
        <<"CGPA:"<<cgpa<<"\n";
    file.close();
    fileread.open("student.txt",std::ios::out|std::ios::app);

    while(std::getline(fileread,line)){
        std::cout<<line<<std::endl;
        count++;
    }
    std::cout<<"student amount is"<<count/3;
    fileread.close();
    return 0;
}