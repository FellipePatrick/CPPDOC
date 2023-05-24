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
    
    int A[a][b], i, j, aux, cont = 0;
    
    bool flag;

    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cout << "\nInforme o valor da coluna " << j << " na linha " << i << ": ";
            cin >> A[i][j];
        }
    }
    
    for(i = 0; i < a; i++){
        flag = false;
        cont = 0;
        for(j = 0; j < b; j++){
            aux = A[i][j];
            for(int n = 0; n < a; n++){
                for(int x = 0; x < b; x++){
                    cout << "\naux = " << aux << " A = " << A[n][x];
                    if(aux == A[n][x]){
                        flag = true;
                        cont++;
                    }
                }
            }
        }
        if (flag == true){
            cout << "\nO numero " << aux << " tem numero repitidos, e o numero de vezes é: " << cont;
        }
    }

}