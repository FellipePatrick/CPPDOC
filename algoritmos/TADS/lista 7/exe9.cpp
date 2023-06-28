/*
    Crie um algoritmo para manipular vetores. O seu programa deve implementar 
    uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
    ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
    inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
    para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
    o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
    inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.
*/

#include <iostream>
using namespace std;
int inverteVetor(int *v1, int *v2, int n);
int qtd = 5;
int main(){
    int v1[qtd], v2[qtd], maior;
    cout << "\nPreencha os valores do vetor\n";
    for(int i = 0; i < qtd; i++){
        cout << "\n: ";
        cin >> v1[i];
    }
    maior = inverteVetor(v1, v2, qtd);
    cout << "\nV2{ ";
    for(int i = 0; i < qtd; i++){
        cout <<  v2[i] << " ";
    }
    cout << " }\nMaior elemento de V1: " << maior;
    return 0;
}
int inverteVetor(int *v1, int *v2, int n){
    int maior = v1[0];
    for(int i = 0; i < n; i++){
        if(maior < v1[i]){
            maior = v1[i];
        }
        v2[i] = v1[(n-1)-i];
    }
    return maior;
}