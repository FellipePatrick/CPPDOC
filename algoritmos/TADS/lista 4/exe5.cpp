/*
	Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo
	vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e
	assim sucessivamente. Ao final, escreva os vetores A e B
*/

#include <iostream>

using namespace std;

int main(){
	int A[5], B[5];
	for(int cont = 0; cont < 5; cont++){
		cout << "\nDigite um valor inteiro para a posicao " <<cont<< ": ";
		cin >> A[cont]; 
	}
	for(int i = 0; i < 5; i++){
		B[i] = A[i] + A[4-i];
	}
	for(int x = 0; x < 5; x++){
		cout << "\nVetor A " << A[x] << " Vetor B " << B[x];
	}
	return 0;
}
