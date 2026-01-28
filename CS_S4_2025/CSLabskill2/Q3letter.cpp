#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;

struct block{
    char alpha;
    int count;
    char mapping;
    float percent;
};

const string letterFrequency = "ETAOINSHRDLCUMWFGYPBVKJXQZ";

int main() {
    block letter[26];
    int count = 0;

    for(int i = 0; i < 26; i++){
        letter[i].alpha = 'A' + i;
        letter[i].count = 0;
        letter[i].mapping = 'A' + i;
    }

    string sequence;
    cout<<"please enter a sequence :";
    getline(cin,sequence);

    for(char &c : sequence){
        if(isalpha(c)){
        count++;
           c = toupper(c);
           letter[c-'A'].count++;
        }
    }

    for(int i = 0; i < 25;i++){
        for(int j = 0; j < 25 - i ;j++){
            if (letter[j].count < letter[j+1].count){
                swap(letter[j],letter[j+1]);
            }
        }
    }

    for(int i = 0; i < 26; i++){
        letter[i].mapping = letterFrequency[i];
    }

    cout <<"============================================\n";
    cout << left<< setw(10)<< "Letter" << setw(10)<< "Count" << setw(10)<< "Mapping" <<"\n";
    cout <<"============================================\n";

    for(int i = 0; i < 26; i++){
        cout<<left<<setw(10)<<letter[i].alpha<<setw(10)<<letter[i].count<<letter[i].mapping<<"\n";
    }

    cout <<"============================================\n";

    string result = "";
    for(char c : sequence){
        if(isalpha(c)){
            result += letter[c -'A'].mapping;
        }else{
            result +=c;
        }
    }

    cout<<"plain text"<<sequence;
    cout<<"\n\ncipher text"<<result;


    return 0;
}
