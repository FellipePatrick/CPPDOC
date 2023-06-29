/*
    Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de 
    duas variáveis inteiras, min e max, e deposite nessas variáveis o valor do menor 
    elemento (mínimo) e do maior elemento (máximo) do vetor. Elabore um algoritmo que 
    teste a função mm
*/
#include <iostream>
using namespace std;
void mm(int *v, int *max, int *min);
int const qtd = 10;
int main(){
    int vetor[qtd], max, min;
    for(int i = 0; i < qtd; i++){
        cout << "\n:";
        cin >> vetor[i];
    }
    mm(vetor, &max, &min);
    cout << "\nMaior vetor: " << max << "\nMenor valor: " << min;
}
void mm(int *v, int *max, int *min){
    int aux = 0, a;
    for(int i = 0; i < qtd;i++){
        for(int x = aux; x < qtd; x++){
            if(v[i] < v[x]){
                a = v[i];
                v[i] = v[x];
                v[x] = a;
            }
        }
        aux++;
    }
    *max = v[0];
    *min = v[qtd-1];
}
