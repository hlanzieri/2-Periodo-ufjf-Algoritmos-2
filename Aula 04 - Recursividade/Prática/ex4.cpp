#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int n){
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false; 
    } 
    return true;
}

int main () {
    int n = 0;
    cin >> n;
    if(ehPrimo(n))  cout << "O numero " << n << " eh primo";
        else cout << "O numero " << n << " nao eh primo";
    return 0;
}