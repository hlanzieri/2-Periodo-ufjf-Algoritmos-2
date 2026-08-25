#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 10, b = 20, c = 30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;
    // Usando pti1 e pti2, faca com que a e b recebam o valor de c.
    *pti1 = c;
    *pti2 = c;
    // Usando pti e aritmetica de ponteiros, preencha o vetor v com os valores de seus ındices somados de 1.
    pti = v;
    for(int i = 0; i < 3; i++){
        *(pti+i) = i+1; // substituindo: *(pti+0) = 1; *(pti+1) = 2; *(pti+2) = 3;
    }
    // Imprima os conteudos do vetor e das variaveis  a, b e c.
    for(int i = 0; i < 3; i++){
        cout << "v[" << i << "] = " << *(v+i) << endl;
    }
    cout << "a = " << a << ", b = " << b << " e c = " << c << endl;
    // Usando pti, atribua a variavel a o valor da primeira posicao do vetor acrescido de 99.
    a = (*pti+0) + 99;
    // Usando pti1 e pti2, atribua a primeira posicao do vetor a soma dos valores de a e b.
    *(pti+0) = *pti1 + *pti2;
    // Atribua a segunda posicao do vetor o conteudo apontado por pti2.
    *(pti+1) = *pti2;
    // Usando aritmetica de ponteiros, atribua a terceira posicao do vetor o conteudo apontado por pti.
    *(pti+2) = *(pti);
    // Usando ponteiros, incremente o valor de b e decremente o valor da segunda posicao do vetor.
    (*pti2)++;
    (*(pti+1))--;
    // Imprima os conteudos do vetor e das variaveis  a, b e c.
    for(int i = 0; i < 3; i++){
        cout << "v[" << i << "] = " << *(v+i) << endl;
    }
    cout << "a = " << a << ", b = " << b << " e c = " << c << endl;
    return 0;
}