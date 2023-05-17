/*
    Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 à 9. Escreva
    um algoritmo que leia a quantidade vendida de cada mercadoria no final do mês (armazenando-os em um
    vetor Q) e o preço unitário de cada uma (armazenando-os em um vetor P). Em seguida calcule e escreva o
    faturamento mensal do armazém.
*/
#include <iostream>

using namespace std;

int main(){
    int const c = 2;
    int i, qtd[c]; 
    float preco[c], faturamento = 0;
    for(i = 0; i < c; i++){
        cout << "\nInforme a quantidade e o valor da mercadoria " << i << ": ";
        cin >> qtd[i] >> preco[i];
        faturamento += qtd[i] * preco[i];
    }
    cout << "\nO faturamento mensal é de: " << faturamento << " R$";
    cout << "\n\nFim do Programa!";
    return 0;
}
