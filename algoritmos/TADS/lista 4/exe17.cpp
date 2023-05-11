/*
	Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no
	máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada
	ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo todos
	os salários de S já reajustados
*/

#include <iostream>

using namespace std;

int main(){
	int n, reajuste;
	do{
		cout << "\nInforme o numero de funcionarios de 1 até 100: ";
		cin >> n;
	}while(n < 0 && n > 100);
	int S[n];
	for(int x = 0; x < n; x++){
		S[x] = -1;
	}
	cout << "\nInforme o valor do reajuste: ";
	cin >> reajuste;
	for(int x = 0; x < n; x++){
		S[x] *= -reajuste;
		cout << "\n" << S[x] << "R$ é o salario atual";
	}
	return 0;
}
