/*
	Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por um 
	carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
	abaixo
*/

#include <iostream>

using namespace std;

int main(){
	float kms, qtdlitros, consumo;
	cout << "Digite o percuso em km: ";
	cin >> kms;
	cout << endl << "Digite a quantidade de litros de gasolina gasta: ";
	cin >> qtdlitros;
	consumo = kms/qtdlitros;
	if(consumo < 8){
		cout << endl << "Venda o carro!";
	}else if(consumo >= 8 && consumo <= 12){
		cout << endl << "Economico!";
	}else if(consumo > 12 ){
		cout << endl << "Super economico!";
	}else{
		cout << endl << "ERRO AO CALCULAR O CONSUMO!";
	}
	return 0;
}
