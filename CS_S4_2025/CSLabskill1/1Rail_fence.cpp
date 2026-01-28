#include <iostream>
#include <vector>
using namespace std;

string encryption(string sequence, int key) {
    if (key == 1) return sequence; // no change if only 1 rail

    vector<string> fence(key);
    int row = 0;
    bool down = true;

    for (int i = 0; i < sequence.length(); i++) {
        fence[row].push_back(sequence[i]);

        if (row == 0) down = true;
        else if (row == key - 1) down = false;

        row += (down ? 1 : -1);
    }

    string result;
    for (string &r : fence) {
        result += r;
    }

    return result;
}

string decryption(string sequence, int key) {
    if (key == 1) return sequence;

    vector<vector<char>> fence(key, vector<char>(sequence.length(), '\n'));

    bool down = false;
    int row = 0;
    for (int col = 0; col < sequence.length(); col++) {
        fence[row][col] = '*';

        if (row == 0) down = true;
        else if (row == key - 1) down = false;

        row += (down ? 1 : -1);
    }

    int index = 0;
    for (int r = 0; r < key; r++) {
        for (int c = 0; c < sequence.length(); c++) {
            if (fence[r][c] == '*' && index < sequence.length()) {
                fence[r][c] = sequence[index++];
            }
        }
    }

    string result;
    row = 0;
    down = true;
    for (int col = 0; col < sequence.length(); col++) {
        result.push_back(fence[row][col]);

        if (row == 0) down = true;
        else if (row == key - 1) down = false;

        row += (down ? 1 : -1);
    }

    return result;
}

int main() {
    int key;
    string sequence;
    cout << "Please enter a sequence that you want to cipher:\n";
    getline(cin, sequence);

    cout << "Please enter how many rails that you want? : ";
    cin >> key;

    string cipher = encryption(sequence, key);
    cout << "After encryption: " << cipher << "\n";

    string decipher = decryption(cipher, key);
    cout << "After decryption: " << decipher << "\n";

    return 0;
}
