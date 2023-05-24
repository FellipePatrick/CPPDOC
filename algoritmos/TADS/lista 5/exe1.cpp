/*
    Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
    inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V. 
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 2;
    int matriz[c][c], valor, vetor[2*c], i, j, cont = 0;
    
    // Ler a matriz

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> matriz[i][j];
        }
    }
    
    //Ler o valor de A 
    
    cout << "\nInforme o valor de A: "; 
    cin >> valor;
    
    //Multiplica a matriz por A e armazena em V

    for(i = 0; i < c; i++){
        for(j = 0; j < 2; j++){
            vetor[cont] = matriz[i][j] * valor;
            cont++;
        }
    }

    //Imprime o vetor V

    for(i = 0; i < (2*c); i++){
        cout << "\nValor do vetor na posição " << i << ": " << vetor[i];
    }
}