#include <bits/stdc++.h>

using namespace std;

int* indicesPares(int vet[], int n){
    int *vetp, k = 0;
    vetp = new int[(n+1)/2];
    for(int i = 0; i < n; i += 2){
        vetp[k] = vet[i];
        k++;
    }
    return vetp;
}

int main(){
    int n, *vet, *vetp;
    cin >> n;
    vet = new int[n];
    vetp = new int[n];
    for(int i = 0; i < n; i++){
        cout << "vet[" << i << "] = ";
        cin >> vet[i];
    }
    vetp = indicesPares(vet, n);
    cout << endl << "Valores indices pares: " << endl;
    for(int i = 0; i < (n+1)/2; i++){
        cout << "vetp[" << i << "] = " << vetp[i] << endl;
    }
    return 0;
}