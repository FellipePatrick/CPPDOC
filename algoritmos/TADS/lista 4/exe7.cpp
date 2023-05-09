/*
	Elabore um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo
	índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante
*/

#include<iostream>
using namespace std;

int main()
{
    int A[6], vetor[6], mult[6];
    for(int x = 0; x < 7; x++){
        cout << "\nInforme o valor para o vetor A na posicao " << x << ":";
        cin >> A[x];
        cout << "\nInforme o valor para o vetor B na posicao " << x << ":";
        cin >> vetor[x];
        mult[x] = A[x] * vetor[x];
    }
    for(int i = 0; i < 7; i++){
        cout << "\nA[ " << A[i] << " ] * vetor[ " << vetor[i] << " ] = " << mult[i];
    }
    return 0;
}
