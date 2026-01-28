#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

char polybius[5][5] = {
 {'A','B','C','D','E'},
 {'F','G','H','I','K'}, 
 {'L','M','N','O','P'},
 {'Q','R','S','T','U'},
 {'V','W','X','Y','Z'}
};

void getCoords(char c, int &row, int &col) {
 if (c == 'J') c = 'I'; 
 for (int r = 0; r < 5; r++) {
     for (int c2 = 0; c2 < 5; c2++) {
         if (polybius[r][c2] == c) {
             row = r + 1; 
             col = c2 + 1;
             return;
         }
     }
 }
}

char getLetter(int row, int col) {
 return polybius[row - 1][col - 1];
}

string encrypt(string plaintext) {
 vector<int> rows, cols;

 string clean = "";
 for (char c : plaintext) {
     if (isalpha(c)) {
         clean += toupper(c);
     }
 }


 for (char c : clean) {
     int r, c2;
     getCoords(c, r, c2);
     rows.push_back(r);
     cols.push_back(c2);
 }


 vector<int> merged = rows;
 merged.insert(merged.end(), cols.begin(), cols.end());


 string cipher = "";
 for (size_t i = 0; i < merged.size(); i += 2) {
     int r = merged[i];
     int c2 = merged[i + 1];
     cipher += getLetter(r, c2);
 }

 return cipher;
}


string decrypt(string cipher) {
 vector<int> coords;

 string clean = "";
 for (char c : cipher) {
     if (isalpha(c)) {
         clean += toupper(c);
     }
 }

 for (char c : clean) {
     int r, c2;
     getCoords(c, r, c2);
     coords.push_back(r);
     coords.push_back(c2);
 }

 int half = coords.size() / 2;
 vector<int> rows(coords.begin(), coords.begin() + half);
 vector<int> cols(coords.begin() + half, coords.end());

 string plain = "";
 for (size_t i = 0; i < rows.size(); i++) {
     plain += getLetter(rows[i], cols[i]);
 }

 return plain;
}

int main() {
 string text;
 cout << "Enter plaintext: ";
 getline(cin, text);

 string cipher = encrypt(text);
 cout << "Ciphertext: " << cipher << endl;

 string decrypted = decrypt(cipher);
 cout << "Decrypted: " << decrypted << endl;

 return 0;
}
