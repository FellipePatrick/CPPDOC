/*
	Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
	pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.
*/

#include <iostream>

using namespace std;

int main(){
	int cont, vetor[5], nPar = 0;
	for(cont = 0; cont < 5; cont++){
		cout << "\nDigite um valor inteiro para a posicao " << cont + 1 << ": ";
		cin >> vetor[cont]; 
	}
	for(cont = 0; cont < 5; cont++){
		if(vetor[cont]%2==0){
			nPar++;
			vetor[cont] = 0;
		}
	}
	cout << "\nO numero de numeros para dentro do vetor eh: " << nPar;
	for(cont = 0; cont < 5; cont++){
		cout << "\n" << vetor[cont]; 
	}
	return 0;
}
