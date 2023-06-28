/*
    Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
    multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
    N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por 
    X e armazenar os resultados em V2. A função deve possui a seguinte assinatura: void 
    multiplica_escalar(int *v1, int *v2, int x, int n); 
    No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor de 
    tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar 
    também fornecido pelo usuário. Por último, o programa deverá exibir o vetor resultante.
*/
#include <iostream>
using namespace std;
int inverteVetor(int *v1, int *v2, int n);
void multiplica_escalar(int *v1, int *v2, int x, int n);
int qtd = 5;
int main(){
    int v1[qtd], v2[qtd], maior, x;
    cout << "\nDigite o valor do multiplicador: ";
    cin >> x;
    cout << "\nPreencha os valores do vetor\n";
    for(int i = 0; i < qtd; i++){
        cout << "\n: ";
        cin >> v1[i];
    }
    multiplica_escalar(v1, v2, x, qtd);
    cout << "\nV2{ ";
    for(int i = 0; i < qtd; i++){
        cout <<  v2[i] << " ";
    }
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
void multiplica_escalar(int *v1, int *v2, int x, int n){
    for(int i = 0; i < n; i++){
        v2[i] = v1[i] * x;
    }
};