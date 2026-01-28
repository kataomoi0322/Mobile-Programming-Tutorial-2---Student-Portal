#include<iostream>
using namespace std;

string ToUpper(string &text){
    string result;
    for(char ch : text){
        if(isalpha(ch)){
            result += toupper(ch);
        }
    }
    return result;
}

string encryption(string &plain, string &key){
    string P = ToUpper(plain);
    string K = ToUpper(key);
    string cipher;

    if(P.length() < K.length()){
        cout<<"key is shorter than plain text \n";
        return "";
    }

    for(int i = 0; i < P.length(); i++){
        char c = ((P[i]-'A') +(K[i]-'A')) %26 + 'A';
        cipher += c;
    }

    return cipher;
}

string decryption(string &cipher, string &key){
    
    string C = ToUpper(cipher);
    string K = ToUpper(key);
    string plain;

    if(C.length() < K.length()){
        cout<<"key is shorter than plain text \n";
        return "";
    }


    for(int i = 0; i < C.length(); i++){
        char p = ((C[i]-'A') - (K[i]-'A')+26) %26 + 'A';
        plain += p;
    }

    return plain;
}

int main(){
    string text,plain,cipher,key;

    cout<<"Enter plain text: ";
    getline(cin,text);

    cout<<"Enter key: ";
    getline(cin,key);

    cipher = encryption(text,key);
    cout<<"After encryption, Cipher text is "<<cipher <<"\n";
    
    plain = decryption(cipher,key);
    cout<<"After decryption, Plain text is "<<plain <<"\n";


    return 0;
}