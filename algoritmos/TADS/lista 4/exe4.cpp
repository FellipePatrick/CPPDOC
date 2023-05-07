/*
	Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
	elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
	elementos
*/

#include <iostream>

using namespace std;

int main(){
	int A[5],  dif, mdif = 0, indices[2], cont;
	for(cont = 0; cont < 5; cont++){
		cout << "\nDigite um valor inteiro para a posicao " <<cont<< ": ";
		cin >> A[cont]; 
	}
	for(int i = 0; i < 4; i++){
		dif = A[i] - A[i+1];
		if(dif > mdif){
			mdif = dif;
			indices[0] = A[i];
			indices[1] = A[i+1];
		} 
	}
	cout << "\nA maior diferenca eh: " << mdif;
	cout << "\nE os indices sao: ";
	for(int i = 0;i < 2; i++){
		cout << indices[i] << " ";
	}
	return 0;
}
