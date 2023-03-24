/*
	Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso em horas, minutos e segundos
*/

#include <iostream>

using namespace std;

int main(){
	int totalSegundos, horas, minutos, segundos;
	cout << "Digite o tempo total em segundos do evento: " << endl << endl;
	cin >> totalSegundos;
	horas = totalSegundos/3600;
	minutos = (totalSegundos%3600)/60;
	segundos = (totalSegundos%3600)%60;
	cout << endl << horas << " hr : " << minutos << " min : " << segundos << " seg" << endl;
	
}
