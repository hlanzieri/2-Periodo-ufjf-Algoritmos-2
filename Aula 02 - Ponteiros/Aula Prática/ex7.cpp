#include <bits/stdc++.h>

using namespace std;

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inverte(int vet[], int n) {
    for (int i = 0; i < n / 2; i++) {
        troca(&vet[i], &vet[n - 1 - i]);
    }
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(vet) / sizeof(vet[0]);
    printf("Vetor original:\n");
    for (int i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    inverte(vet, n);
    cout << "Vetor invertido:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}