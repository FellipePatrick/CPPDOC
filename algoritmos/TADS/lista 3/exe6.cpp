/*
	Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas.
	A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a
	tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um
	algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro
	do algoritmo e não estará visível para o usuário
*/

#include <iostream>

using namespace std;

int main(){
	int numero, adivinha, cont = 1;
	while(cont <= 3){
		adivinha = 4;
		cout << "Digite um numero de 1 a 10 para ver se voce consegue adivinhar o numero secreto: ";
		cin >> numero;
		if(numero > adivinha){
			cout << endl << "Tente um numero menor!" << endl << endl;
		}else if( numero < adivinha){
			cout << endl << "Tente um numero maior!" << endl << endl;
		}else if(numero == adivinha){
			cout << endl << "PARABENS VOCE GANHOU!";
			return 0;
		}
		cont++;
	}
	cout << endl << "Suas chances acabaram, tente novamente mais tarde!";
	return 0;
}
