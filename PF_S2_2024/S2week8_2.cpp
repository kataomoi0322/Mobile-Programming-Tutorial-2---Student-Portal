// charFunction.cpp
// Example to validate matric number. Matric is 4 characters long,
// with the first being an alphabet and the last three being digits (A123)

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char matric[20];
    int len;
    
    cout << "Enter your matric number in this format (A123): ";
    cin >> matric;
    
    len = strlen(matric); // Get length
    
    if (isalpha(matric[0])== true && (len==4)) // Start with alphabet and length is 4
    {
        cout << "The matric you entered is: " << matric << " is valid" << endl;
    } 
    
    else
    {
        cout << "First char:" << matric[0] << endl;
        cout << "Invalid matric: First character must be alphabet" << endl;
        cout << "Maximum size is 4" << endl;
        cout << "The matric you entered is:";    
    }
    
    return 0;
}

