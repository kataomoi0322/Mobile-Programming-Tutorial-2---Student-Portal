#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("Text.txt");  // 打开文件
    if (!fin) {
        cerr << "Error: cannot open input.txt" << endl;
        return 1;
    }

    int n, m;
    fin >> n;  // number of processes
    fin >> m;  // number of resources

    vector<vector<int>> Allocate(n, vector<int>(m));
    vector<vector<int>> MaxNeed(n, vector<int>(m));
    vector<int> totalResource(m);

    // Read Allocation matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> Allocate[i][j];
        }
    }

    // Read MaxNeed matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> MaxNeed[i][j];
        }
    }

    // Read Total Resources
    for (int j = 0; j < m; j++) {
        fin >> totalResource[j];
    }

    // 检查是否读取成功
    cout << "Processes: " << n << ", Resources: " << m << endl;

    cout << "\nAllocation Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << Allocate[i][j] << " ";
        cout << endl;
    }

    cout << "\nMaxNeed Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << MaxNeed[i][j] << " ";
        cout << endl;
    }

    cout << "\nTotal Resources: ";
    for (int j = 0; j < m; j++) cout << totalResource[j] << " ";
    cout << endl;

    fin.close();
    return 0;
}