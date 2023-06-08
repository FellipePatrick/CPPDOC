/*
    Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
    que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
    mensagem dizendo quantas vezes cada elemento aparece em A
*/


//Dar uma olhada depois que ta duvidoso


#include <iostream>

using namespace std;

int main(){
    
    int const a = 3, b = 2;
    
    int A[a][b], i, j, aux, cont = 0, soma = 0;
    
    bool flag[a][b];

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cout << "\nInforme na coluna " << i << " linha " << j << " o valor: ";
            cin >> A[a][b];
            flag[a][b] = false;
        }
    }
    for(i = 0; i < a; i++){
        aux = A[i][cont];
        for(j = 0; j < b; j++){
            if(aux == A[i][j] && flag[i][j] == false){
                soma++;
                flag[i][j] = true;
                cout << "\nO numero " << aux << " aparece " << soma << " vezes!\n";
            }
        }
        cont++;
        soma = 0;
    }

}