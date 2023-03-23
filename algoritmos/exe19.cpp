/*
	1 - Escreva um código que leia idade, altura e o peso de 5 pessoas
	2 - Imprima quantas pessoas tem mais de 50 anos
	3 - Imprima quantas pessoas pesam menos de 40kg
	4 - Imprima quantas pessoas têm entre 1m e 2m de altura
*/

#include <iostream>
using namespace std;

int main(){
	
	int cont = 1, contIdade = 0, contPeso = 0, contAltura = 0;
	
	double peso, idade, altura;
	
	while(cont <= 2){
		
		cout << "Informe a idade da pessoa " << cont << ":" << endl; 
		
		cin >> idade;
		
		if(idade > 50){
			contIdade++;
		}
		
		cout << "Informe o peso da pessoa " << cont << ":" << endl; 
		
		cin >> peso;
		
		if(peso < 40){
			
			contPeso++;
			
		}
		
		cout << "Informe a altura da pessoa " << cont << ":" << endl; 
		
		cin >> altura;
		
		if(altura >= 1 and altura <= 2){
			contAltura++;
		}
			
		cont++;		
	}
	
	cout << "Total de pessoa com Peso < 40 / Altura entre 1m e 2m / Idade > 50 / : " << contPeso << " // " << contAltura << " // " << contIdade << endl; 
}
