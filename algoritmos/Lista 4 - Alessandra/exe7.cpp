/*
	Elabore um algoritmo que leia n números, calcule e escreva a soma dos números lidos. O algoritmo 
	deverá finalizar quando o número 0 for digitado pelo usuário
*/

#include <iostream>

using namespace std;

int main(){
	int numero, soma = 0;
	do{
		cout << "Digite um numero: ";
		cin >> numero;
		soma += numero;
	}while(numero != 0);
	cout << endl << "A soma de todos os numeros digitados é: " << soma;
	return 0;
}
