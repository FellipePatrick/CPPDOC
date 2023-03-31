/* Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente 
	ao dia. Considere que domingo é o dia 1 e sábado é o dia 7 */
	
#include <iostream>

using namespace std;

int main(){
	int dia;
	string nomeDia;
	cout << "Digite o dia da semana em numero de (1 a 7):";
	cin >> dia;
	if(dia > 0 && dia <= 7){
		switch(dia){
			case 1: nomeDia = "Domingo";
			break;
			case 2: nomeDia = "Segunda-Feira";
			break;
			case 3: nomeDia = "Terça-Feira";
			break;
			case 4: nomeDia = "Quarta-Feira";
			break;
			case 5: nomeDia = "Quinta-Feira";
			break;
			case 6: nomeDia = "Sexta-Feira";
			break;
			case 7: nomeDia = "Sabado";
			break;
		}
		if(dia > 1 && dia <= 6){
			cout << endl << "Voce digitou: " << dia << " que é: " << nomeDia << " e é um dia util!";
		}else{
			cout << endl << "Voce digitou: " << dia << " que é: " << nomeDia << " e não é um dia util!";
		}
	}else{
		cout << endl << "Dia invalido!";
	}
	return 0;
}
