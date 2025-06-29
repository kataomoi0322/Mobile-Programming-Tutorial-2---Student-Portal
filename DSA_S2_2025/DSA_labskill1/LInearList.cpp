#include <iostream>
#include <string>
using std::string;

void StudentList(int x[] , const int &size){
    int *ap = x;
    for(int i = 0 ; i < size ; i++){
        std::cout << "Student's Names : " << "\n";
    }
}

void AddStudent(std::string &name , std::string &MatrixNumber, long int &QuizScore){
    std::cout << "Enter the student's name : ";
    std::cin >> name;
    std::cout << "Enter the student's matrix number : ";
    std::cin >> MatrixNumber;
    std::cout << "Enter the student's quiz score : ";
    std::cin >> QuizScore;
}

void RemoveStudent(string &Keyword){
    
}