/*
    Escreva um programa que leia números 10 inteiros, armazene-os em um vetor e 
    os escreva na ordem contrária à de leitura. Obs: todos os acessos ao vetor devem ser 
    feitos usando somente ponteiros, sem usar os índices
*/
#include <iostream>
using namespace std;
int main(){
    int vetor[3], *point;
    for(int i = 0; i < 3; i++){
        cin >> vetor[i];
    }
    point = vetor;
    for(int i = 0; i < 3; i++){
        point++;
    }
    for(int i = 0; i < 3; i++){
        point--;
        cout << *point << " ";
    }
    return 0;
}