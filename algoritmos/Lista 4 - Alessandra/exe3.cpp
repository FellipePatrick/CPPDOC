/* 
	Elabore um algoritmo que leia duas datas (com dia, mês e ano cada uma), calcule e escreva o número
	de dias decorridos entre elas. Considerar meses de 28, 30 e 31 (desconsiderando anos bissextos)
*/

#include <iostream>

using namespace std;

int main(){
	
	int ano1, ano2, dia1, dia2, mes1, mes2, res, diasTotal;
	
	cout << endl << "Digite o ano da primeira data: ";
	cin >> ano1;
	cout << endl << "Digite o ano da segunda data: ";
	cin >> ano2;
	cout << endl << "Digite o mes da primeira data: ";
	cin >> res;
	switch(res){
		case 1:
			mes1 = 0;
		case 2:
			mes1 = 31;
		case 3:
			mes1 = 59;
		case 4:
			mes1 = 90;
		case 5:
			mes1 = 120;
		case 6:
			mes1 = 151;
		case 7:
			mes1 = 181;
		case 8:
			mes1 = 212;
		case 9:
			mes1 = 243;
		case 10:
			mes1 = 273;
		case 11:
			mes1 = 304;
		case 12:
			mes1 = 334;
	}
	cout << endl << "Digite o mes da segunda data: ";
	cin >> res;
		switch(res){
		case 1:
			mes2 = 0;
		case 2:
			mes2 = 31;
		case 3:
			mes2 = 59;
		case 4:
			mes2 = 90;
		case 5:
			mes2 = 120;
		case 6:
			mes2 = 151;
		case 7:
			mes2 = 181;
		case 8:
			mes2 = 212;
		case 9:
			mes2 = 243;
		case 10:
			mes2 = 273;
		case 11:
			mes2 = 304;
		case 12:
			mes2 = 334;
	}
	cout << endl << "Digite o dia da primeira data: ";
	cin >> dia1;
	cout << endl << "Digite o dia da segunda data: ";
	cin >> dia2;
	diasTotal = ((ano1*365)+mes1+dia1) - ((ano2*365)+mes2+dia2);
	if(diasTotal < 0){
		diasTotal*= -1;
	}
	cout << endl << "A quantidade de dias de uma data para a outra é:  " << diasTotal << " dias";
	return 0;
}
