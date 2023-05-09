/*
	Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que:
	a. Leia A e B.
	b. Calcule a soma dos elementos de A.
	c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B
*/

#include <iostream>
using namespace std;

int main(){
	int x, A[10], B[10], C[10], soma = 0;
	for(x = 0; x < 11; x++){
		cout << "\nInforme os valores da posicao A e B no indice " << x << ": ";
		cin >> A[x] >> B[x];
		soma += A[x];
		C[x] = A[x] + B[x];
	}
	return 0;
}
