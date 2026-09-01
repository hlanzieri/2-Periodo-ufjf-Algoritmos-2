#include <bits/stdc++.h>

using namespace std;

void lerVet(int n, float vet[]){
    for(int i = 0; i < n; i++){
        cout << "vet[" << i << "] = ";
        cin >> vet[i];
    }
}

float prodEscalar(int n, float x[], float y[]){
    float soma = 0;
    for(int i = 0; i < n; i++){
            soma += x[i]*y[i];
    }
    return soma;
}

int main(){
    int n;
    float *vetx, *vety;
    cin >> n;
    vetx = new float[n];
    vety = new float[n];
    cout << endl << "Leia X:" << endl;
    lerVet(n, vetx);
    cout << endl << "Leia Y:" << endl;
    lerVet(n, vety);
    cout << endl << "Produto Escalar = " << prodEscalar(n, vetx, vety) << endl;
    delete [] vetx;
    delete [] vety;
    return 0;
}