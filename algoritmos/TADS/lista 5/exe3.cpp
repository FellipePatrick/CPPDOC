/*
    Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz. 
    a) da linha 4 de M 
    b) da coluna 2 de M 
    c) da diagonal principal 
    d) da diagonal secundária 
    e) de todos os elementos da matriz M 
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 5;
    int matriz[c][c], i, j;
    int somaL4 = 0, somaC2 = 0, somaDP = 0, somaDS = 0, somaTotal = 0;
    
    // Ler a matriz

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> matriz[i][j];
        }
    }

    // Fazer as somas

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            somaTotal += matriz[i][j];
            if(j == 2){
                somaC2 += matriz[i][j];
            }
            if(i == 4){
                somaL4 += matriz[i][j];
            }
            if((j == 0 && i == 4) || (j == 1 && i == 3) || (j == 2 && i == 2)  || (j == 3 && i == 1) || (j == 4 && i == 0)){
                somaDS += matriz[i][j];
            }
            if((j == 0 && i == 0) || (j == 1 && i == 1) || (j == 2 && i == 2)  || (j == 3 && i == 3) || (j == 4 && i == 4)){
                somaDP += matriz[i][j];
            }
        }
    }

    // Mostrar somas e a matriz;

    cout << "\n\n\t A MATRIZ\n";
    
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl << endl;
    }

    cout << "\nA soma da linha 4: " << somaL4 << endl << "A soma da coluna 2: " << somaC2 << endl << "A soma da diagonal principal: " << somaDP << endl;
    cout << "A soma da diagonal secundaria: " << somaDS << endl << "A soma total dos numeros: " << somaTotal;

}