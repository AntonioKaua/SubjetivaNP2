#include <iostream>
using namespace std;

int main(){
    float n1, n2, resultado = 0;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao;

    if(operacao == '+'){
        resultado = n1 + n2;
    } else if(operacao == '-'){
        resultado = n1 - n2;
    } else if(operacao == '*'){
        resultado = n1 * n2;
    } else if(operacao == '/'){
        if(n2 != 0){
            resultado = n1 / n2;
        } else {
            cout << "Erro: Divisao por zero!" << endl;
            return 1;
        }
    } else {
        cout << "Operacao invalida!" << endl;
        return 1;
    }

    return 0;

}