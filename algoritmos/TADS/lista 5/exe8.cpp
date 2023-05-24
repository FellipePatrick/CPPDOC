/*
    Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde 
    se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e 
    encontre seu elemento minimax, mostrando também sua posição
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 3;
    int matriz[c][c], i, j, maior, minimax, colunam, posicaom;
    bool flag;
    
    // le a matriz

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da matriz na linha " << i << " coluna " << j << ": ";
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(i == 0){
                if( j != 0){
                    if(matriz[i][j] > maior){
                        maior = matriz[i][j];
                        flag = true;    
                    }
                }else{
                    maior = matriz[i][j];
                    flag = true;
                }
            }else{
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    flag = true;
                }
            }
            
        }
        if(flag){
            for(int x = 0; x < j; x++){
                    if(x != 0){
                        if(matriz[i][x] < minimax){
                            minimax = matriz[i][x];
                            colunam = x;
                            posicaom = i;
                        }
                    }else{
                        minimax = matriz[i][x];
                        colunam = x;
                        posicaom = i;
                    }
            }
            flag = false;
        }
    }

    cout << "O minimax dessa matriz é: " << minimax << ", e sua posição é coluna: " << colunam << " e linha: " << posicaom;    
}