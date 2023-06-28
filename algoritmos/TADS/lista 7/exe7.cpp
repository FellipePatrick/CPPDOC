/*
    Escreva uma função chamada Troca que troque os valores dos parâmetros 
    recebidos. Essa função não deve ter retorno
*/
#include <iostream>
using namespace std;
void TrocaValores(int *n1, int *n2);
int main(){
    int n1, n2;
    cout << "\nDigite n1 e n2: ";
    cin >> n1 >> n2;
    TrocaValores(&n1, &n2);
    cout << "\nn1: " << n1 << " n2: " << n2;
    return 0;
}
void TrocaValores(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}