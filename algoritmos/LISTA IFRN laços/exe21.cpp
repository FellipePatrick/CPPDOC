/*
	1 - Escreva um código que calculará os juros compostos sobre um dinheiro investido
	2 - Leia o valor que será investido (C), a taxa de rentabilidade (i) e a quantidade de meses (t)
	3 - A fórmula é M = C x (1 + i)t 
	4 - Imprima o MONTANTE final (M)
	5 -  Imprima os JUROS (M - C)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int cont = 1;
	
	double valorC, taxaRentabilidadeI, mesesT, montante, juros;
	
	cout << "Digite o valor a ser investido: " << endl;
	
	cin >> valorC;
	
	cout << endl << "Informe a taxa de rentabilidad: " << endl;

	cin >> taxaRentabilidadeI;
	
	cout << endl << "Informe a quantidade de meses: " << endl;
	
	cin >> mesesT;
	
	montante = valorC * pow(1 + taxaRentabilidadeI, mesesT);
	
	juros = montante - valorC;
	
	cout << montante << " " << juros;
}
