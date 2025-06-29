#include<iostream>
#include<string>
#include<vector>
std::vector <std::string> title= {"jojo"};
std::vector <std::string> author= {"ali"};
std::vector <std::string> genre= {"fiction"};
std::vector <std::string> ISBN= {"19056704"};
std::vector <bool> AvailableB= {true};

//adding book
void add(){
    std::string newTitle,newAuthor,newGenre,newISBN,newA;
    
    std::cout << "enter a title" << std::endl;
    std::cin.ignore();
    std::getline(std::cin,newTitle);

    std::cout << "enter a author" << std::endl;
    std::getline(std::cin,newAuthor);

    std::cout << "genre" << std::endl;
    std::getline(std::cin,newGenre);

    std::cout << "ISBN" << std::endl;
    std::getline(std::cin,newISBN);

    std::cout << "Is this book available ?(y/n)" << std::endl;
    std::getline(std::cin,newA);

    if(newA== "y"||newA== "Y"){
        AvailableB.push_back(true);
    }else if (newA== "n"||newA== "N")
    {
        AvailableB.push_back(false);
    }else
    {
        std::cout << "error" << std::endl;
    }

    title.push_back(newTitle);
    author.push_back(newAuthor);
    genre.push_back(newGenre);
    ISBN.push_back(newTitle);

}

//remove book
void remove(){
    bool matchedBook = false;
    std::string delIndex;
    std::cout << "please enter ISBN code" << std::endl;
    std::cin >> delIndex;
    for(size_t i =0; i <ISBN.size() ;i++)
    {
        if (ISBN[i] == delIndex)
        {   
            title.erase(title.begin()+i);
            author.erase(author.begin()+i);
            genre.erase(genre.begin()+i);
            ISBN.erase(genre.begin()+i);
            AvailableB.erase(AvailableB.begin()+i);
            bool matchedBook = true;
            std::cout << "book found ,already clear" << std::endl;
        }        
    }
    if (!matchedBook){
        std::cout << "book does not exist" << std::endl;
    }
}

//search book
void search(){
    std::string matchedBook;
    std::cout << "please enter keyword" << std::endl;
    std::cin >>matchedBook;
    for (size_t i =0; i <title.size() ;i++)
    {
        if(matchedBook== title[i]||matchedBook== author[i]|matchedBook== genre[i]||matchedBook== ISBN[i]){
            std::cout << title[i] << std::endl;
            std::cout << author[i] << std::endl;
            std::cout << genre[i] << std::endl;
            std::cout << ISBN[i] << std::endl;
            std::cout << "Availability: " << (AvailableB[i] ? "Available" : "Not Available") << "\n";
        }else{
            std::cout << "Error : book did not found " << std::endl;
        }
    }
}

//check out book for borrower
void checkOut(){
    bool Exist_book = true;
    std::string COnum;//Check Out number
    std::cout << "please enter ISBN code" << std::endl;
    std:getline(std::cin,COnum);

    for (size_t i = 0; i < ISBN.size(); i++)
    {
        if (ISBN[i] == COnum)
        {
            if(AvailableB[i] = true){
                std::cout << "this book is available to borrow" << std::endl;
                AvailableB.at(i)=false;
            }else{
                std::cout << "this book is not available to borrow,please try again" << std::endl;
            }

        }
    }

    if (!Exist_book)
    {
        std::cout << "error" << std::endl;
    }
}

//return
void checkIn(){
    bool Exist_book = true;
    std::string COnum;//Check Out number
    std::cout << "please enter ISBN code" << std::endl;
    std:getline(std::cin,COnum);
    for (size_t i = 0; i < ISBN.size(); i++)
    {
        if (ISBN[i] == COnum)
        {
           AvailableB.at(i)=true;
           std::cout << "thank you for return book" << std::endl; 
        }
    }
    if (!Exist_book)
    {
        std::cout << "error" << std::endl;
    }
}

int main(){
    char op;
    bool choice = true;

    while (choice)
    {
        std::cout << "\033[31m libary management system" << "\n";      // Red
        std::cout << "\033[33m 1. add book" << "\n";   // Orange
        std::cout << "\033[32m 2. remove book" << "\n";   // Yellow
        std::cout << "\033[34m 3. search book" << "\n";     // Blue
        std::cout << "\033[35m 4. borrow book" << "\n";   // Indigo
        std::cout << "\033[36m 5. return book" << "\n";   // Violet
        std::cout << "\033[31m 6.exit" << "\n";
        std::cout << "\033[0m please enter your choice \n";

        std::cin>>op;

        switch (op){
            case '1':
            add();
            break;
            case '2':
            remove();
            break;
            case '3':
            search();
            break;
            case '4':
            checkOut();
            break;
            case '5':
            checkIn();
            break;
            case '6':
            choice = false;
            std::cout << "thank for using" << std::endl;
            return 0;
            break;
            
            default:
            std::cerr<<"error";
            break;
        }
    
    }
    return 0;
}
    
