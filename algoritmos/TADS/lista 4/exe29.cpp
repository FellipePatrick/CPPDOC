/*
    Elabore um algoritmo que leia 20 números inteiros obrigatoriamente diferentes e armazene-os em um vetor.
    Cada vez que o número digitado já existir no vetor, o algoritmo deverá computar mais um erro. Ao final
    escreva o vetor e o total de erros que o usuário cometeu
*/
#include <iostream>

using namespace std;

int main(){
    int const c = 3;
    int i, vetor[c], aux, qtdErros = 0, x, b = 0;
    bool flag = true;
    for(i = 0; i < c; i++){
            flag = true;
            do{
                b = 0;
                cout << "\nInforme o valor do vetor na posição " << i << ": ";
                cin >> aux;
                if(i != 0){
                    for(x = 0; x <= i; x++){
                        if(aux == vetor[x]){
                            cout << "\nEsse numero ja existe no vetor!";
                            qtdErros++; 
                            b = 1;
                        }
                    }
                }else{
                    vetor[i] = aux;
                }
                if(b == 0){
                    vetor[i] = aux;
                    flag = false;
                }
            }while(flag == true);
    }
    cout << "\nA quantidade de erros foi de: " << qtdErros;
    cout << "\n\n[ ";
    for(i = 0; i < c; i++){
        cout << vetor[i] << " ";
    }
    cout << "]";
    return 0;
}
