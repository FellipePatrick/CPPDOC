/*
	Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
	fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
	sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
	imposto a ser pago
*/

#include <iostream>

using namespace std;

int main(){
	int ano, preco;
	double prestacao;
	cout << "Digite o ano de fabricacao do carro: ";
	cin >> ano;
	cout << endl << "Digite o valor do carro: ";
	cin >> preco;
	if(ano <= 1990){
		prestacao = preco * 0.1;
		cout << endl << "O valor da transferencia e: " << prestacao << " R$" << endl;
	}else{
		prestacao = preco * 0.15;
		cout << endl << "O valor da transferencia e: " << prestacao << " R$" << endl;
	}
	return 0;
}
