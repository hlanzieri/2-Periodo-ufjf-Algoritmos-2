#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int **m = new int*[n];
    for(int i = 0; i < n; i++) {
        m[i] = new int[n];
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];
    cout << endl << "Imprimindo a matriz: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;
    m = nullptr;
    return 0;
}