/*
	Elabore um algoritmo que leia dois vetores de inteiros X e Y, cada um com 5 elementos (não permita
elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores
resultantes:
	a. Soma: soma dos elementos de X e Y de mesmo índice;
	b. Distância: distância entre os elementos de X e Y de mesmo índice;
*/

#include <iostream>

using namespace std;

int main(){
	int X[5], y[5], x, n, i = 0;
	bool dif = true;
	for(x=0;x<5;x++){
		do{
			cout << "\nInforme o valor da posicao " << x << " no vetor x: ";
			cin >> n;
			do{
				if(n == y[i]){
					dif = false;
					cout << "\nJa existe esse valor!";
				}
				i++;
			}while(i <= x && dif == true);
		}while(dif == false);
		X[x] = n;
		dif = true;
		do{
			cout << "\nInforme o valor da posicao " << x << " no vetor y: ";
			cin >> n;
			do{
				if(n == y[i]){
					dif = false;
					cout << "\nJa existe esse valor!";
				}
				i++;
			}while(i <= x && dif == true );
		}while(dif == false);
		y[x] = n;
	}
	cout << "\nA soma\t\tA distancia";
	for(x = 0; x < 5; x++){
		cout << "\n"<< X[x] + y[x] << "\t\t" << X[x] - y[x];
	}
	return 0;
}
