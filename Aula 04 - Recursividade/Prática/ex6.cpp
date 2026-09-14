#include <bits/stdc++.h>

using namespace std;

float harmonico(int n){
    if(n == 1) return 1.0;
    return (1.0 / n) + harmonico(n - 1);
}

int main () {
    int n;
    if (!(cin >> n) || n < 1) {
        cout << "Insira um numero maior ou igual a 1" << endl;
        return 1;
    }
    cout << "Harmonico de " << n << ": " << (float)harmonico(n);
    return 0;
}