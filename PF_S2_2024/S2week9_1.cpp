#include <fstream>
#include <iostream>
//using namespace std;

/*int main() {
    ofstream out("prog1.txt");
    out << "Test file content";
    out.close();

    ifstream in("prog1.txt");
    if (!in) {
        cout << "error opening prog1.txt" << endl;
    } else {
        cout << "opened prog1.txt" << endl;
    }

    in.close();

    return 0;
}*/

int main (){
    std::ofstream out("prog1.txt",std::ios::out|std::ios::app);
    out << "Test file content";
    out.close();

    std::ifstream openfile("prog1.txt");
    char ch;


    while(!openfile.eof()){
        openfile.get(ch);
        std::cout << ch<<" ";
    }

    openfile.close();

    return 0;
}