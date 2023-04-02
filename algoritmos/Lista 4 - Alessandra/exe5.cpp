/*
	Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	cout << "Digite um numero: " << endl;
	cin >> numero;
	cout << "Os numeros que são divisores de " << numero << ": ";
	for(int i = 1; i <= numero; i++){
		if((numero%i)==0){
			cout << i << " | ";
		}
	}
	return 0;
}
