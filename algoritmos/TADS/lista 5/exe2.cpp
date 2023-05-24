/*
    Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores 
    da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A 
    (quando for igual a A, insira um 0). Mostre os resultados.
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 2;
    int matriz[c][c], espelho[c][c], valor, i, j, aux;
    
    // Ler o valor de A

    cout << "\nInforme o valor de A: ";
    cin >> valor;
    
    // Ler a matriz e o espelho

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> aux;
            matriz[i][j] = aux;
            if(aux == valor){
                espelho[i][j] = 0;
            }else{
                espelho[i][j] = aux;
            }
        }
    }

    // Mostar a matrize e o espelho

    cout << "\n\n\tOs valores da matiz e seu espelho\n\n";

    for(i = 0; i < c; i++){
        cout << "\t";
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\t";
        for(j = 0; j < c; j++){
            cout << espelho[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
}