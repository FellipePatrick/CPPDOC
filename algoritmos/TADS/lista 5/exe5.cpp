/*
    Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das 
    12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada
*/


#include <iostream>

using namespace std;

int main(){
    int const c = 2, b = 1;
    int matriz[b][c], i, j, modificada[b][c],maior, cont = 0;    
    bool flag = false;
    for(i = 0; i < b; i++){
        for(j = 0; j < c; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> matriz[i][j];
        }
    }
    do{
        if(flag ==true){
            for(i = 0; i < c; i++){
                modificada[cont][i] = matriz[cont][i] * maior;
                cout << "\n\nvalor = " << modificada[cont][i];
            }
            cont++;   
            flag = false;
        }else{
           for(i = 0; i < c; i++){
                if(i != 0){
                   if(matriz[c][i] > maior){
                        maior = matriz[cont][i];
                    }
                }else{
                    maior = matriz[cont][i];
                }
            }
            flag = true;
        }
    }while(cont < b);
     cout << "\n\n\tOs valores da matiz e seu espelho\n\n";

    for(i = 0; i < b; i++){
        cout << "\t";
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\t";
        for(j = 0; j < c; j++){
            cout << modificada[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
}