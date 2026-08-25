#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 23;
    float y = 9.7;
    // Declare e inicialize um ponteiro pt1 com o endereco de x.
    int *pt1 = &x;
    // Incremente o valor de x de forma indireta
    *pt1 = *pt1 + 1;
    // Declare um segundo ponteiro (pt2) e faca-o apontar para y.
    float *pt2 = &y;
    // Imprima a soma dos valores de x e y, sem usar as variaveis x e y.
    cout << "Soma = " << *pt1 + *pt2 << endl;
    // Imprima o endereco da posicao de memoria localizada 16 bytes apos o endereco de x.
    cout << "16 bytes apos o endereco x = " << pt1 + 4 << endl;
    // Declare um terceiro ponteiro (pt3) e faca-o apontar para o ponteiro de y.
    float **pt3 = &pt2;
    // Usando pt3, mova pt2 para a proxima posicao de memoria
    *pt3 = *pt3 + 1;
    // Usando apenas pt3, imprima os enderecos de pt3 e pt2.
    cout << "end pt3 = " << &pt3 << " end pt2 = " << pt3 << endl;
    return 0;
}