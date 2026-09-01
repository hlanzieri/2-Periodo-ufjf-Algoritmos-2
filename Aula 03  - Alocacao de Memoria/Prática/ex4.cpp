#include <bits/stdc++.h>

using namespace std;

int* redimensiona(int vet[], int n, int novo){
    if(novo <= n) return vet;
    else{
        int *vetn;
        vetn = new int[novo];
        for(int i = 0; i < novo; i++){
            if(i < n){
                vetn[i] = vet[i];
            } else vetn[i] = 0;
        }
        return vetn;
    }
}

int main(){
    int n, *vet, novo;
    cin >> n;
    vet = new int[n];
    for(int i = 0; i < n; i++){
        cout << "vet[" << i << "] = ";
        cin >> vet[i];
    }
    cin >> novo;
    int *vetn;
    vetn = new int[novo];
    vetn = redimensiona(vet, n, novo);
    cout << endl << "Novo vetor redimensionado:" << endl;
    for(int i = 0; i < novo; i++){
        cout << "vet[" << i << "] = " << vetn[i] << endl;
    }
    return 0;
}