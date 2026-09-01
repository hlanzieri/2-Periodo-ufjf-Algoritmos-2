#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, *vet, soma = 0;
    cin >> n;
    vet = new int[n];
    for(int i = 0; i < n; i++){
        cout << "vet[" << i << "] = ";
        cin >> vet[i];
        soma += vet[i];
    }
    cout << endl << "Media = " << (float)soma/n << endl;
    delete [] vet;
    return 0;
}