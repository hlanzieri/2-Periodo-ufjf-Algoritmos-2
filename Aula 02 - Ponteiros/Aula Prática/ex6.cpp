#include <bits/stdc++.h>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos) {
    *par = 0;
    *impar = 0;
    *negativos = 0;
    for (int i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            (*par)++;
        } else {
            (*impar)++;
        }
        if (vet[i] < 0) {
            (*negativos)++;
        }
    }
    return (*negativos > 0);
}

int main() {
    int vetor[] = {3, -2, 7, -4, 8, 10, -5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int qtd_pares, qtd_impares, qtd_negativos;
    bool tem_negativo = func(tamanho, vetor, &qtd_pares, &qtd_impares, &qtd_negativos);
    cout << "Total de pares: " << qtd_pares << endl;
    cout << "Total de ímpares: " << qtd_impares << endl;
    cout << "Total de negativos: " << qtd_negativos << endl;
    cout << "Existem números negativos? " << tem_negativo ? "Sim (true)" : "Não (false)";
    return 0;
}