/*
	Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus
	elementos estão em ordem crescente, ordem decrescente ou ordem aleatória
*/

#include <iostream>

using namespace std;

int main(){
	int vetor[5], cres= 1, decr = 1;
	for(int x = 0; x < 5; x++){
		cout << "\nInforme o valor desta posicao: ";
		cin >> vetor[x];
		if(x >= 1){
			if(vetor[x] > vetor[x-1]){
				cres++;
			}else{
				if(vetor[x] < vetor[x-1]){
					decr++;
				}
			}
		}
	}
	if(cres != 5 && decr != 5){
		cout << "\nO Vetor esta na ordem aleatoria";
	}else{
		if(cres == 5){
			cout << "\nO Vetor esta na ordem crescente";
		}else{
			cout << "\nO Vetor esta na ordem decrescente";
		}
	}
	return 0;
}
