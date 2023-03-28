/*
	Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique 
	e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 1). 
	Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número inválido”.
*/

#include <iostream>

using namespace std;

int main(){
	int numero, calculo, soma;
	cout << "Digite um numero: ";
	cin >> numero;
	if(numero > 0 && numero < 100000){
		if(numero > 9999 && numero < 100000){
			calculo = (numero/10000) - (numero%10000);
			numero = (numero%10000) * 10000;
			soma += calculo;
			calculo = (numero/1000) - (numero%1000);
			numero = (numero%1000) * 1000;
			soma += calculo;
			calculo = (numero/100) - (numero%100);
			numero = (numero%100) * 100;
			soma += calculo;
			calculo = (numero/10) - (numero%10);
			numero = (numero%10) * 10;
			soma += calculo + numero;
			
		}else if(numero > 999 && numero < 10000){
			calculo = (numero/1000) - (numero%1000);
			numero = (numero%1000) * 1000;
			soma += calculo;
			calculo = (numero/100) - (numero%100);
			numero = (numero%100) * 100;
			soma += calculo;
			calculo = (numero/10) - (numero%10);
			numero = (numero%10) * 10;
			soma += calculo + numero;
		}else if(numero > 99 && numero < 1000){
			calculo = (numero/100) - (numero%100);
			numero = (numero%100) * 100;
			soma += calculo;
			calculo = (numero/10) - (numero%10);
			numero = (numero%10) * 10;
			soma += calculo + numero;
		}else if(numero > 9 && numero < 100){
			calculo = (numero/10) - (numero%10);
			numero = (numero%10) * 10; 
			soma = calculo + numero;
		}else if(numero < 10){
			soma = numero;
		}
	}
	cout << endl << soma;
}
