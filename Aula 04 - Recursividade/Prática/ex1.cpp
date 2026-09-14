#include <bits/stdc++.h>

using namespace std;

int fatorial(int n){
    if (n <= 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main () {
    int n;
    cin >> n;
    if(n < 0) cout << "Nao existe fatorial de numero menor que 0";
        else cout << "O fatorial de " << n << " eh " << fatorial(n);
    return 0;
}