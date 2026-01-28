#include <iostream>
#include <string>
using namespace std;

void search(char (&arr)[5][5], int &r, int &c, char loc) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            if (loc == arr[row][col]) {
                r = row;
                c = col;
                return;
            }
        }
    }
}

string FormatSequence(string text) {
    string result = "";
    for (char ch : text) {
        if (ch != ' ') {  
            result += tolower(ch); 
        }
    }
    if (result.length() % 2 != 0) {
        result += 'z'; 
    }
    return result;
}

string encryption(string plain) {
    char arr[5][5] = {
        {'z','x','c','v','b'},
        {'n','m','a','s','d'},
        {'f','g','h','j','k'},
        {'l','q','w','e','r'},
        {'t','y','u','o','p'}
    };

    string cipher = "";
    int r1, r2, c1, c2;
    char char1, char2;

    plain = FormatSequence(plain);

    for (int i = 0; i < plain.length(); i += 2) {
        char1 = plain.at(i);
        char2 = plain.at(i + 1);

        search(arr, r1, c1, char1);
        search(arr, r2, c2, char2);

        if (r1 == r2) { 
            char1 = arr[r1][(c1 + 1) % 5];
            char2 = arr[r2][(c2 + 1) % 5];
        } else if (c1 == c2) { 
            char1 = arr[(r1 + 1) % 5][c1];
            char2 = arr[(r2 + 1) % 5][c2];
        } else { 
            char1 = arr[r1][c2];
            char2 = arr[r2][c1];
        }

        cipher += char1;
        cipher += char2;
    }
    return cipher;
}

string decryption(string cipher) {
    char arr[5][5] = {
        {'z','x','c','v','b'},
        {'n','m','a','s','d'},
        {'f','g','h','j','k'},
        {'l','q','w','e','r'},
        {'t','y','u','o','p'}
    };

    string plain = "";
    int r1, r2, c1, c2;
    char char1, char2;

    cipher = FormatSequence(cipher);

    for (int i = 0; i < cipher.length(); i += 2) {
        char1 = cipher.at(i);
        char2 = cipher.at(i + 1);

        search(arr, r1, c1, char1);
        search(arr, r2, c2, char2);

        if (r1 == r2) { 
            char1 = arr[r1][(c1 + 4) % 5];
            char2 = arr[r2][(c2 + 4) % 5];
        } else if (c1 == c2) { 
            char1 = arr[(r1 + 4) % 5][c1];
            char2 = arr[(r2 + 4) % 5][c2];
        } else { 
            char1 = arr[r1][c2];
            char2 = arr[r2][c1];
        }

        plain += char1;
        plain += char2;
    }
    return plain;
}

int main() {
    string plain;
    cout << "Please enter a sequence: ";
    getline(cin, plain);  

    string cipher = encryption(plain);
    cout << "Cipher text: " << cipher << endl;

    string decrypted = decryption(cipher);
    cout << "Decrypted text: " << decrypted << endl;

    return 0;
}
