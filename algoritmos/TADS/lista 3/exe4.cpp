/*
	Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores 
	positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 
	é perfeito, pois 1+2+3 = 6.
*/

#include <iostream>

using namespace std;

int main(){
	int n, cont = 1;
	float somaTotal = 0;
	cout << "Digite um numero positivo: ";
	cin >> n;
	if(n < 0){
		cout << endl << "Numero invalido!";
		return 0;
	}
	while(cont < n){
		if(n%cont == 0){
			somaTotal += cont;
		}
		cont++;
	}
	if(somaTotal == n){
		cout << endl << n << " é um numero perfeito! Pois a soma dos seus divisores é igual a: " << somaTotal;
	}else if(n == 1){
		cout << endl <<  n << " é um numero perfeito! Pois a soma dos seus divisores é igual a: " << 1;
	}else{
		cout << endl <<  n << " não é um numero perfeito! Pois a soma dos seus divisores é igual a: " << somaTotal;
	}
	return 0;
}
