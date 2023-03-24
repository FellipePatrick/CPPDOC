/*
	Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
	valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.
*/

#include <iostream>
using namespace std;

int main(){
	double dolar, cotacao, reais;
	cout << "Digite o valor da cotacao do dolar: ";
	cin >> cotacao;
	cout << endl << "Digite a quantidade de dolares a serem convertidos: ";
	cin >> dolar;
	reais = dolar * cotacao;
	cout << endl << "O valor da conversao em reais e: " << reais << "R$";
	return 0;
}
