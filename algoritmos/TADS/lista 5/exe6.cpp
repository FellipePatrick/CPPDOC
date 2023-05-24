/*
    Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir: 
    - Os elementos da diagonal principal pelos elementos da diagonal secundária;
    - Os elementos da linha 5 com os da coluna 10. 
    Escreva a matriz modificada.
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 4;
    int matriz[c][c], espelho[c][c], i, j, cont = 0, dP = 0, dS = c - 1, metade = c/2;
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> matriz[i][j];
            espelho[i][j] = matriz[i][j];
        }
    }
    for(i = 0; i < c; i++){
        cout << "\n = " << espelho[i][dP+cont] << " e = " << espelho[i][dS-cont] << endl;
        espelho[i][dP+cont] = espelho[i][dS-cont];
        cont++;
    }
    //D+0; 1+1; 2+1   //D = D + 1; principal com D começando em 0
    //D começando o numero final de c secundaria é D-0, D-1, D-2
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(j == metade){
                for(int x = 0; x < c; x++){
                    espelho[j][x] = espelho[x][metade];
                }
            }
        }
    }
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    cout << endl << endl;

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << espelho[i][j] << " ";
        }
        cout << endl;
    }
}