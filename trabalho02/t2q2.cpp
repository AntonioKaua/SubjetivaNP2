#include <iostream>
using namespace std;

int main(){
    //Crie um programa em C++ que leia duas notas de um aluno (valores entre 0 e 10) e mostre:
    //Se ele passou (média maior ou igual a 7) Se ele ficou em recuperação (média entre 5 e 6.9) Se ele reprovou (média menor que 5)

    float n1 = -1;
    float n2 = -1;

    while(n1 < 0 || n1 > 10){
        cout << "Digite a primeira nota do aluno: "; cin >> n1;
        if(n1 < 0 || n1 > 10){
            cout << "Digite uma nota válida (0 a 10)!" << endl;
        }
    }
    

    while(n2 < 0 || n2 > 10){
        cout << "Digite a segunda nota do aluno: "; cin >> n2;
        if(n2 < 0 || n2 > 10){
            cout << "Digite uma nota válida (0 a 10)!" << endl;
        }
    }

    float media = (n1 + n2)/2;

    if(media >= 7){
        cout << "O aluno teve nota sufuciente, parabéns! A média foi: " << media << endl;
    }

    if(media >= 5 && media < 7){
        cout << "O aluno ficará de recuperação.A média foi: " << media << endl;
    }

    if(media < 5){
        cout << "O aluno está reprovado.A média foi: " << media << endl;
    }




    return 0;
}