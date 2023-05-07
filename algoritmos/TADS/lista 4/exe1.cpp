/*
	Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o
	código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor
	na ordem inversa (do último até o primeiro)
*/

#include<iostream>

using namespace std;

int main(){
	int n, cont;
	int vetor[5];
	for(int cont = 0; cont < 5; cont++){
		cout << "\nInforme o valor na posicao " << cont <<  ": ";
		cin >> vetor[cont];
	}
	do{
		cout << "\nAgora informe um valor de codigo (1-crescente ou 2-decrescente): ";
		cin >> n;
	}while(n > 2 && n < 1);
	if(n == 1){
		for(cont = 0; cont < 5; cont++){
			cout << "\n" << vetor[cont];
		}
	}else{
		for(cont = 4; cont >= 0; cont--){
			cout << "\n" << vetor[cont];
		}
	}
	return 0;
}
