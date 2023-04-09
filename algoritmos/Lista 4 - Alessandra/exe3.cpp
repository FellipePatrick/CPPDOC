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
			break;
		case 2:
			mes1 = 31;
			break;
		case 3:
			mes1 = 59;
			break;
		case 4:
			mes1 = 90;
			break;
		case 5:
			mes1 = 120;
			break;
		case 6:
			mes1 = 151;
			break;
		case 7:
			mes1 = 181;
			break;
		case 8:
			mes1 = 212;
			break;
		case 9:
			mes1 = 243;
			break;
		case 10:
			mes1 = 273;
			break;
		case 11:
			mes1 = 304;
			break;
		case 12:
			mes1 = 334;
			break;
	}
	cout << endl << "Digite o mes da segunda data: ";
	cin >> res;
	switch(res){
		case 1:
			mes1 = 0;
			break;
		case 2:
			mes1 = 31;
			break;
		case 3:
			mes1 = 59;
			break;
		case 4:
			mes1 = 90;
			break;
		case 5:
			mes1 = 120;
			break;
		case 6:
			mes1 = 151;
			break;
		case 7:
			mes1 = 181;
			break;
		case 8:
			mes1 = 212;
			break;
		case 9:
			mes1 = 243;
			break;
		case 10:
			mes1 = 273;
			break;
		case 11:
			mes1 = 304;
			break;
		case 12:
			mes1 = 334;
			break;
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
