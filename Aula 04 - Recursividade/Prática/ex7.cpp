#include <bits/stdc++.h>

using namespace std;

float soma(int x, int n){
    if (n <= 1) return x; 
    return ((pow(-1, n - 1) * pow(x, n)) / n) + soma(x, n - 1);
}

int main () {
    int x, n;
    while(cin >> x >> n && n != 0);
    cout << "Soma: " << soma(x, n);
    return 0;
}