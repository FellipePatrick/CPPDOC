/*
	Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
	ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
	maior que Chico
*/

#include <iostream>

using namespace std;

int main(){
	float chico = 1.50, juca = 1.10, cont=1;
	while(chico >= juca){
		chico+=0.02;
		juca += 0.03;
		cont++;
	}
	cout << "O total de anos para juca passar chico é: " << cont << " anos";
	return 0;
}
