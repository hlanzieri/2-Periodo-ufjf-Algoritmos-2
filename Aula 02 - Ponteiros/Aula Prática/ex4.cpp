#include <bits/stdc++.h>

using namespace std;

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main () {
    int x = 10;
    int y = 20;
    cout << "Antes da troca: x = " << x << ", y = " << y << endl;
    troca(&x, &y);
    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

    return 0;
}