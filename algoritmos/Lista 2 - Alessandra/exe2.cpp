/*
	Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
	maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	cout << "Informe um numero: ";
	cin >> numero;
	if(numero%2 == 0){
		if (numero > 100){
			cout << endl << "O numero e par e e maior que 100" << endl;
		}else {
			cout << endl << "O numero e par e nao e maior que 100" << endl;
		}
	}else {
		if(numero < 0){
			cout << endl << "O numero e impar e e negativo" << endl;
		}else {
			cout << endl << "O numero e impar e e positivo" << endl;
		}
	}
	return 0;
}
