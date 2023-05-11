/*
	Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e
	intercale os dois vetores A e B formando o vetor C (de 20 elementos).
*/

#include <iostream>

using namespace std;

int main(){
	int x,cont = 0, A[5], B[5], C[10];
	for(x = 0; x < 5; x++){
		cout << "\nInforme o valor de a e b na posicao " << x << ": ";
		cin >> A[x] >> B[x];
		C[cont] = A[x];
		cont ++;
		C[cont] = B[x];
		cont ++;
	}
	return 0;
}
