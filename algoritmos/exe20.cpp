/*
	* - Escreva um código que calculará o valor das prestações de um produto sabendo que:
		
		– 1 prestação = 1% de juros
		
		– 2 prestações = 2% de juros e assim por diante
		
	* - Leia o valor da compra, a quantidade de prestações
	
	* - Calcule o valor de cada prestação com os juros, de acordo com a tabela acima
	
	* - Imprima quanto está sendo pago de juros em cada prestação
	
*/

#include <iostream>

using namespace std;

int main(){
	int cont = 1, numeroPrestacoes;
	
	bool res = true;
	
	double valor, juros, totalPrestacoes, media, n;
	
	cout << "Digite o valor do produto: " << endl;
	
	cin >> valor;
	
	cout << "Digite em quantas vezes voce quer dividir (1 a 12): " << endl;
	
	cin >> numeroPrestacoes;
	
	if(numeroPrestacoes > 12 or numeroPrestacoes < 0){
		res = false;
	}
	
	if(res = true){
		media = valor/numeroPrestacoes;
		while(cont <= numeroPrestacoes){
			n = cont;
			cout << endl << "O valor a pagar na prestacao " << cont << " : " << media + (valor*(n/100)) << " R$"<< endl;
			cont++;
		}
	}else{
		cout << "Voce digitou um numero de divisao invalido";
	}
}
