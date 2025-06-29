#include<iostream>
#include<cstring>
#include<cctype>
#include<string>

/*
int main(){
    char matrix[4];
    char DDWA[]="DDWA";
    char DDWC[]="DDWC";
    char DDWE[]="DDWE";
    int len;

    std::cout << "please enter you matrix:";
    std::cin  >> matrix;
    len = strlen(matrix);
    for(int i = 0; i< len; i++){
        matrix[i]=toupper(matrix[i]);
    }
    
    
    if(isalpha(matrix[0])  && len == 4){
        std::cout << "Your matrix is valid "<< matrix << std::endl;
        switch (matrix[3])
        {
            case 'A':
                std::cout << "Your course is DIPLOMA IN CIVIL ENGINEERING" << std::endl;
                break;
            case 'C':
                std::cout << "Your course is DIPLOMA IN COMPUTER SCIENCE" << std::endl;
                break;
            case 'E':
                std::cout << "Your course is DIPLOMA IN ELECTRICAL ENGINEERING" << std::endl;
                break;
            default:
                std::cout << "error" << std::endl;
                break;
        }
    }else{
        std::cout << "error" << std::endl;
    }

    int qo = strcmp(matrix,DDWC);
    std::cout << qo << std::endl;
    if(isalpha(matrix[0])  && len == 4){
        std::cout << "Your matrix is valid "<< matrix << std::endl;
        if(strcmp(matrix,DDWA) == 0){
            std::cout << "Your course is DIPLOMA IN CIVIL ENGINEERING" << std::endl;
        }else if (strcmp(matrix,DDWC) == 0)
        {
            std::cout << "Your course is DIPLOMA IN COMPUTER SCIENCE" << std::endl;
        }else if (strcmp(matrix,DDWE) == 0)
        {
            std::cout << "Your course is DIPLOMA IN ELECTRICAL ENGINEERING" << std::endl;
        }else
        {
            std::cout << "idk" << std::endl;
        }

    }else{
        std::cout << "error" << std::endl;
    }


}*/

int main(){
    std::string name;
    std::string ic;
    std::string course;
    std::string year;
    std::string temp;
    std::string id;

    std::cout << "Enter student name:";
    std::getline(std::cin,name);

    std::cout<<"enter ic number without dash:";
    std::cin>> ic;

    std::cout << "enter course name:";
    std::cin.ignore();
    std::getline(std::cin,course);

    std::cout << "enter register year:";
    std::cin>>year;

    int size = course.length();

    id[0]=course[0];
//find function
    for(int i = 0; i < size;i++){
        if(course[i] == ' '){
            temp = course[i+1];
            break;
        }
    }

    id = course[0] + temp+year[2]+year[3]+"00";
    id.append(ic.substr(8,4));
   


    std::cout<<"name: "<<name<<std::endl;
    std::cout << "IC number: "<<ic << std::endl;
    std::cout<<"Course: "<<course<<std::endl;
    std::cout << "student id:"<<id;
    

    return 0;
}