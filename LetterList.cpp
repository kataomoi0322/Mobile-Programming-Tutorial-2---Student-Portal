//Ngoo Jun Yu(A24DW0429),lee Xuan Hui(A24DW0423) ,Yong Yuan Lin(A24DW0325), Tiong Yong Hern(A24DW0106) ,Syamhi(A24DW0271)
//Data Libary System
//Lab Skill 1 

#include <iostream>

//Data type of the linked list
#ifndef DATA_H
#define DATA_H

typedef struct Library{
    int datas;
    Library * Next;

    Library(int data){
        this->datas = data;
        this->Next = nullptr;
    }
}Librarys;

#endif // DATA_H

//Linked list class
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LibraryList{
    private:
        Librarys * Head;
        Librarys * Tail;
        int Size;

        public:
        LibraryList(){
            this->Head = nullptr;
            this->Tail = nullptr;
            this->Size = 0;
        }

        bool Add(int data){
            Librarys * NewLibrary = new Librarys(data);
            try{
            if(this->Head == nullptr){
                this->Head = NewLibrary;
                this->Tail = NewLibrary;
            }else{
                this->Tail->Next = NewLibrary;
                this->Tail = NewLibrary;
            }
                this->Size++;
                return true;
            }catch(std::bad_alloc &){
                return false;
            }
                return false;
        }

        bool Remove(int data){
            if (this->Head == nullptr) {
                return false; // List is empty
            }
            Librarys * Previous = nullptr;
            Librarys * Current = this->Head;

            //Traversal
            while (Current != nullptr && Current->datas != data){
                Previous = Current;
                Current = Current->Next;
            }

            if(Current == nullptr){
                return false;
            }

            if (Previous == nullptr) {
                this->Head = Current->Next;
                if (this->Head == nullptr) {
                    this->Tail = nullptr;  // If the list becomes empty, update Tail as well
                }
            }else{
                Previous->Next = Current->Next;
                    if (Current == this->Tail) {
                        this->Tail = Previous; // If we're removing the Tail, update the Tail pointer
                }
            }
            this->Size--;

            delete Current;
            return true;
        }

        bool Search(int data){
            Librarys * Current = this->Head;
            while(Current != nullptr && Current->datas != data){
                Current = Current->Next;
            }
            return Current != nullptr;
        }

        void Display(){
            Librarys * Current = this->Head;
            while (Current != nullptr){
                std::cout << Current->datas << " ";
                Current = Current->Next;
            }
            std::cout << std::endl;
        }
};

#endif // LINKEDLIST_H

//Main function
int main(){
    int data;
    LibraryList * List = new LibraryList();
    int choice;
    std::string exit;
    std::cout << "1. Add Data" << std::endl;
    std::cout << "2. Remove Data" << std::endl;
    std::cout << "3. Search Data" << std::endl;
    std::cout << "4. Display Data" << std::endl;
    do{
        std::cout << "Enter Your Choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter Data: ";
                std::cin >> data;
                if(List->Add(data)){
                    std::cout << "Data Added Successfully" << std::endl;
                    break;
                }else{
                    std::cout << "Failed to Add Data" << std::endl;
                }
                break;

            case 2:
            std::cout << "Enter Data: ";
            std::cin >> data;
            if(List->Remove(data)){
                std::cout << "Data Removed Successfully" << std::endl;
            }else{
                std::cout << "Failed to Remove Data" << std::endl;
            }
            break;

            case 3:
            std::cout << "Enter Data: ";
            std::cin >> data;
            if(List->Search(data)){
                std::cout << "Data Found" << std::endl;
            }else{
                std::cout << "Data Not Found" << std::endl;
            }
            break;

            case 4:
            List->Display();
            break;

            default:
            std::cout << "Invalid Choice" << std::endl;
            break;
        }
        std::cout << "Do Again? (Y/N): ";
        std::cin >> exit;
}while(exit == "Y" || exit == "y");
    return 0;
}