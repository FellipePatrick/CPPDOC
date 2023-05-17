/*
    Elabore um algoritmo que leia um vetor X de até 10 elementos. A leitura deverá ser executada até que o vetor
    fique totalmente preenchido ou seja informado um valor negativo ou zero. Em seguida leia 2 valores de
    índices representando um intervalo fechado no vetor (índice inicial e índice final). Finalmente o algoritmo
    deverá escrever todos os elementos do vetor naquele intervalo, o maior elemento, o menor elemento e a
    média dos elementos
*/
#include <iostream>
using namespace std;
int main(){
    int vetor[10], res = 1,primeiro, cont = 0, ultimo, maior, menor, ax = 0;
    float media = 0;
    do{
        ax++;
        if(cont != 0){
            media += res;
            vetor[cont-1] = res;      
        }
        cout << "\nInforme o valor na posição " << cont << ": ";
        cin >> res;
        if(cont != 0 && res >= 0){
            ultimo = res;
        }else{
            if(res >= 0)
                primeiro = res;
        }
        cont++;
    }while(cont < 10 && res >= 0);
    media /= ax;
  
    for(int i = 0; i < (ax - 1); i++){
        if(i != 0){
            cout << endl << vetor[i];  
            if(vetor[i] < menor){
                menor = vetor[i];
            }
            if(vetor[i] > maior){
                maior = vetor[i];
            }
        }else{
            menor = vetor[i];
            maior = vetor[i];
        }
    }
    cout << "\nOs indices são " << primeiro << " e " << ultimo << "\nO menor numero: " << menor << "\nO maior numero: " << maior << "\nA media de numeros: " << media;  
    return 0;
}
