#include <iostream>
using namespace std;

int main(){
    //Questão 1
    //Discorra sobre os seguintes pontos:
        //a) Qual a sintaxe do while?
            //while (condicao) {
                // código a ser repetido
            //}
        //b) Quais os 3 componentes essenciais para um laço while com contador não infinito?
            // 1. inixiar o contador
            // 2. condição
            // 3. incrementação
        //c) Qual a diferença entre um contador e um acumulador?
            //Contar o número de eventos/iterações	
            //Somar ou multiplicar valores variáveis

    int n1 = 0 ;
    int fatorial = 1;
    cout << "Digite um número para saber seu fatorial: "; cin >> n1;

    while(n1 <= 0){
        cout << "Digite um número positivo não nulo! "; cin >> n1;
    }

    int i = n1;
        
    while(i != 0){
        fatorial = fatorial * i;
        i = i - 1;
    }

    cout << "O fatorial de " << n1 << " é: " << fatorial << endl;

    return 0;
}