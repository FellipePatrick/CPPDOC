/*
	Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
	acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
	a vista ou parcelado em até 10 vezes sem juros
*/

#include <iostream>

using namespace std;

int main(){
	double valorCompra;
	int prestacao;
	cout << "Digite o valor da compra: " << endl;
	cin >> valorCompra;
	cout << "Digite quantas vezes quer dividir: " << endl;
	cin >> prestacao;
	switch(prestacao){
		case 0:
			cout << "Voce comprou a vista o valor e: " << valorCompra;
			break;
		case 1:
			cout << "Voce comprou a parcela ficou: " << valorCompra/1;
			break;
		case 2:
			cout << "Voce comprou a parcela ficou: " << valorCompra/2;
			break;
		case 3:
			cout << "Voce comprou a parcela ficou: " << valorCompra/3;
			break;
		case 4:
			cout << "Voce comprou a parcela ficou: " << valorCompra/4;
			break;
		case 5:
			cout << "Voce comprou a parcela ficou: " << valorCompra/5;
			break;
		case 6:
			cout << "Voce comprou a parcela ficou: " << valorCompra/6;
			break;
		case 7:
			cout << "Voce comprou a parcela ficou: " << valorCompra/7;
			break;
		case 8:
			cout << "Voce comprou a parcela ficou: " << valorCompra/8;
			break;
		case 9:
			cout << "Voce comprou a parcela ficou: " << valorCompra/9;
			break;
		case 10:
			cout << "Voce comprou a parcela ficou: " << valorCompra/10;
			break;
	}
}
