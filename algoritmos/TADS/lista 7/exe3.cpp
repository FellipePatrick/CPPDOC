/*
    Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
    retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
    função em um programa que lê n1 e n2 do usuário e imprime a soma
*/

#include <iostream>
using namespace std;
int returnS(int n1, int n2);
int main(){
    int somaT = returnS(5, 10);
    cout << "A soma total dos numeros de 5 a 10 eh: " << somaT;
    return 0;
}
int returnS(int n1, int n2){
    int somaT = 0,tamanho = n1 - n2, start = n1;
    if(tamanho < 0){
        tamanho *= (-1);
    }
    for(int i = n1; i < n2; i++){
        somaT += (n1 + (start));
        start++;
    }
    return somaT;
}