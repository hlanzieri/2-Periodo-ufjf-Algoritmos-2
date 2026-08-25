#include <bits/stdc++.h>

using namespace std;

void divisao (int num, int div, int *q, int *r){
    *q = num/div;
    *r = num % div;
}

int main() {
    int num = 10;
    int div = 3;
    int quociente;
    int resto;
    divisao(num, div, &quociente, &resto);
    cout << num << " / " << div << " = " << quociente << " e resto " << resto << endl;

    return 0;
}