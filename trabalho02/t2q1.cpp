#include <iostream>
using namespace std;

int main(){
    //Questão 1 – Operadores Aritméticos Crie um programa em C++ que leia dois números inteiros e mostre na tela:
    //A soma dos dois números 
    //A subtração 
    //A multiplicação 
    //A divisão

    int n1, n2, soma, mult, sub, div = 0;

    cout << "Digite o primeiro número: " << endl; cin >> n1;
    cout << "Digite o segundo número: " << endl; cin >> n2;

    soma = n1+n2;
    sub = n1-n2;
    mult = n1*n2;
    div = n1/n2;

    cout << "A soma de " << n1 << " + " << n2 << " é: " << soma << endl;
    cout << "A subtração de " << n1 << " - " << n2 << " é: " << sub << endl;
    cout << "A multiplicação de " << n1 << " * " << n2 << " é: " << mult << endl;
    cout << "A divisão de " << n1 << " / " << n2 << " é: " << div << endl;

    return 0;
}