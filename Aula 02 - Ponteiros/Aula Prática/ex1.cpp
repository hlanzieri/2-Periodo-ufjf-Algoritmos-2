#include <bits/stdc++.h>

using namespace std;

int main(){
    int *pt, x; // declarando o ponteiro pt
    cout << &pt << endl; // imprimindo o endereco de pt
    cin >> x;
    pt = &x; // pt aponta para o conteudo de x
    cout << pt << endl;
    cout << &x << endl; // imprimindo o endereco de x
    *pt = (*pt)*10; // multiplicando o valor apontado por pt por 10
    cout << x << endl; // ou
    cout << *pt << endl;
    pt += 10; // somando a variavel pt
    cout << pt << endl; // essa saida significa que a memoria foi realocada para 10 posicoes a frente
    // endereco original + 40 bytes
    return 0;
}