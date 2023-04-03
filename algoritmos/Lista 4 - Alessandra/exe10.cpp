/*
	Elabore um algoritmo que leia vários conjuntos de três números inteiros em ordem crescente, calcule 
	e escreva para cada um sua soma, seu produto e sua média. O algoritmo deverá finalizar quando o 
	conjunto não for digitado em ordem crescente.
*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, soma, produto, media;
	bool x = true;
	cout << "--------------------------- DIGITE NUMEROS EM ORDEM CRESCENTE PARA QUE O PROGRAMA FUNCIONE ----------------------";
	do{
		cout << endl << "Digite o numero: ";
		cin >> n1;
		cout << endl << "Digite o numero: ";
		cin >> n2;
		cout << endl << "Digite o numero: ";
		cin >> n3;
		if((n1 > n3 or n1 > n2) or (n2>n3)){
			x = false;
		}
		if(x){
			cout  << endl << "--------------------------- RESULTADOS DOS NUMEROS NAS EQUAÇÕES (+ * E MEDIA) ---------------------------" << endl;
			soma = n1 + n2 + n3;
			produto = n1 * n2 * n3;
			media = (n1 + n2 + n3)/3;
			cout << endl << "A soma: " << soma << endl;
			cout << endl << "O produto: " << produto<< endl;
			cout << endl << "A media: " << media<< endl << endl;
			cout  << endl << "---------------------------------------------------------------------------------------------------------";		
		}
	}while(x);
	cout << endl << "Programa finalizado!";
	return 0;
}
