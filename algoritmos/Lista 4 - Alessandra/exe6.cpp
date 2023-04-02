/*
	Escreva um algoritmo que encontre o n-ésimo número primo maior que 11, sendo n um número
	digitado pelo usuário
*/

#include <iostream>

using namespace std;

int main(){
	float numero, i = 1, primo;
	cout << "Digite um numero: ";
	cin >> numero;
	if(numero > 11){
		while(true){
			primo = numero/i;
			if(primo != 0){
				return false;
			}
			i++;
		}
		cout << endl << "O proximo numero primo depois de " << numero << " é: " << primo;
	}
	return 0;
}
