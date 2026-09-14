#include <bits/stdc++.h>

using namespace std;

void imprimeIntervalo(int a, int b, int inc){
    if (a > b) return;
    cout << a << " ";
    imprimeIntervalo(a + inc, b, inc);
}

int main () {
    int a, b, inc;
    while(cin >> a >> b >> inc && inc <= 0);
    imprimeIntervalo(a, b, inc);
    return 0;
}