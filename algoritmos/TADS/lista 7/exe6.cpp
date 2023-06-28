/*
Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
elementos do vetor e atribuir às variáveis min e max respectivamente
*/
#include <iostream>
using namespace std;
void MinMax(int *v, int *min, int *max);
int qtd = 3;
int main(){
    int vetor[qtd], min, max;
    for(int i = 0; i < qtd;i++){
        cout << "\nDigite o valor da posicao " << i << ": ";
        cin >> vetor[i];
    }
    MinMax(vetor, &min, &max);
    cout << "\nMenor elemento: " << min;
    cout << "\nMaior elemento: " << max;
    return 0;
}
void MinMax(int *v, int *min, int *max){
    *min = v[0];
    *max = v[0];
    for(int i = 1; i < qtd; i++){
        if(v[i] > *max){
            *max = v[i];
        }
        if(v[i] < *min){
            *min = v[i];
        }
    }
}