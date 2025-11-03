#include <iostream>
using namespace std;

int main(){
    int n1 = 0, n2 = 0, soma = 0;
    cout << "Digite o primeiro número da soma: " << endl;
    cin >> n1;
    cout << "Digite o segundo número da soma: " << endl;
    cin >> n2;

    soma = n1 + n2;

    cout << "A soma de " << n1 << " + " << n2 << " = " << soma << "." << endl;
    

    return 0;
}