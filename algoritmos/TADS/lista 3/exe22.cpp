/*
	Elabore um algoritmo que leia vários pares de dois números inteiros, calcule e escreva, para cada par, o
	resultado do primeiro elevado ao segundo (sem utilizar a função de potência) e a soma dos dois números
	em módulo. Considere que o módulo de um número representa a distância desse número à origem
	(ponto zero da reta real). Exemplo: Módulo de 9 = 9; módulo de -9 = 9
*/

#include <iostream>

using namespace std;

int main(){
	long int modulo = 1, n1, n2,cont = 1, res, soma;
	do{
		cout << endl << "Informe o primeiro numero: ";
		cin >> n1;
		cout << endl << "Informe o segundo numero: ";
		cin >> n2;
		if(n2 < 0){
			n2 = n2 * (-1);
		}
		for(int i = 1; i <= n2; i++){
			modulo *= n1;
		}
		soma = n1 + n2;
		cout << endl << "A soma dos numeros é: "<< soma << " e a potenciação deles resultou em: " << modulo;
	}while(cont <= 10);
	return 0;
}
