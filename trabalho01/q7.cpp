#include <iostream>
using namespace std;

int main(){
    float salario = 0, aumento = 0, novo_salario = 0;
    cout << "Digite o salário atual do funcionário: " << endl;
    cin >> salario;
    aumento = salario * 0.25;
    novo_salario = salario + aumento;
    cout << "O novo salário é: " << novo_salario << endl;
    return 0;
}