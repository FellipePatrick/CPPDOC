/*
	leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
	verifique e escreva se o parcelamento foi com juros ou se foi sem juros
*/

#include <iostream>

using namespace std;

int main(){
	float compra, parcela, precoFinal, juros;
	int qtdParcelas;
	cout << "Digite o valor da compra: ";
	cin >> compra;
	cout << endl << "Digite o valor da parcela e a quantidade de vezes que foi devidido a compra: ";
	cin >> parcela >> qtdParcelas;
	precoFinal = qtdParcelas * parcela;
	if(precoFinal > compra){
		cout << endl << "Você comprou com um juros de: " << precoFinal - compra << " R$";
	}else{
		cout << endl << "Você comprou sem juros ";	
	}
	return 0;
}
