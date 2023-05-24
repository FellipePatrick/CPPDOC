/*
    Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da 
    diagonal principal
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 3;
    int i, j,matriz[c][c], dP = 0, media = 0;
        // le a matriz

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da matriz na linha " << i << " coluna " << j << ": ";
            cin >> matriz[i][j];
        }
    }
    
    // calculando a media da diagonal principal

    for(i = 0; i < c; i++){
        media += matriz[i][dP];
        dP++;
    }
    
    
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nA media da diagonal principal da matriz é: " << media/c;
    return 0;

    
}