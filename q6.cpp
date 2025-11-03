#include <iostream>
using namespace std;

int main(){
    float altura = 0, largura = 0, area = 0;
    cout << "Digite a altura do retângulo: " << endl;
    cin >> altura;
    cout << "Digite a largura do retângulo: " << endl;
    cin >> largura;

    area = altura * largura;

    cout << "A área do retângulo é: " << area << endl;
    return 0;
}