/*
Faça um algoritmo que gere e escreva automaticamente a seguinte matriz: 
1 1 1 1 1 1 
1 2 2 2 2 1 
1 2 3 3 2 1 
1 2 3 3 2 1 
1 2 2 2 2 1 
1 1 1 1 1 1
*/

#include <iostream>

using namespace std;

int main(){
    int const c = 6;
    int matriz[c][c], i, j;
    
    // le a matriz

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            matriz[i][j] = 1;
            if(i != 0 && j != 0){
                matriz[i][j] = 2;
            }
        }
    }


    // imprime a matriz

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}