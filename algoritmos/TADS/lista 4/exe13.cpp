/*
	Elabore um algoritmo que:
	Solicite um número inteiro N ao usuário.
	Declare um vetor V com N elementos inteiros.
	Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro
	do anterior.
	Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor
	elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.
	Mostre o vetor antes e depois da mudanç
*/

#include <iostream>

using namespace std;

int main(){
	int x, n, indiceM, numero;
	bool flag = false;
	cout << "\nInforme um numero N para o tamanho do vetor: ";
	cin >> n;
	int vetor[n];
	int vetorA[n];
	for(x = 0; x < n; x++){
		if(x == 0){
			vetor[x] = 1;
			vetorA[x] = 1;
		}else{
			vetor[x] = vetor[x-1]*2;
			vetorA[x] =	vetorA[x-1]*2;
		}
	}
	cout << "\nAgora digite um numero para verificar se esse existe no vetor: ";
	cin >> numero;
	for(x = 0; x <= n; x++){
		if(vetor[x] == numero){
			flag = true;
		}
		if(x > 0){
			if(vetor[x] <= indiceM){
				indiceM = vetor[x];
			}
		}else{
			indiceM = 0;
		}
	}
	if(flag){
		vetor[indiceM] = 'X';
		for(x = 0; x <= n; x++){
			cout << "\nvetor antes : " << vetorA[x] << " vetor depois : " << vetor[x];
		}
	}else{
		cout << "\nNao existe e esse eh o vetor antes e depois";
		for(x = 0; x <= n; x++){
			cout << "\nvetor antes : " << vetorA[x] << " vetor depois : " << vetor[x];
		}
	}
}
