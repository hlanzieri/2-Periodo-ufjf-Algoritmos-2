#include <bits/stdc++.h>

using namespace std;

void imprimeDecrescente(int n){
    if (n < 1) return; 
    cout << n << " ";
    imprimeDecrescente(n - 1);
}

int main () {
    int n;
    while(cin >> n && n <= 0);
    imprimeDecrescente(n);
    return 0;
}