#include <iostream>

enum person{ kohane, kanade, mizuki };

int main (){
    person choose = kohane;
    
    switch (choose)
    {
        case kohane :
            std::cout << "ya, cute hammer" << std::endl;
            break;

        case kanade :
            std::cout << "ya, cute hammer" << std::endl;
            break;
        
        case mizuki :
            std::cout << "ya, cute hammer" << std::endl;
            break;

    default:
        break;
    }

    return 0 ;
}