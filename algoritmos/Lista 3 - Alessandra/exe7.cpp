/*
	Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo 
	de 10; se for ímpar, escreva se é divisível por 5.
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	bool par, impar;
	cout << "Digite um numero: ";
	cin >> numero;
	par = ((numero%2)==0) ? true : false;
	if(par){
		if(numero%10 == 0){
			cout << endl << "é multiplo de 10";
		}else{
			cout << endl << "não é multiplo de 10";
		}
	}else{
		if(numero%5 == 0){
			cout << endl << "é multiplo de 5";
		}else{
			cout << endl << "não é multiplo de 5";
		}
	}
	return 0;

}
