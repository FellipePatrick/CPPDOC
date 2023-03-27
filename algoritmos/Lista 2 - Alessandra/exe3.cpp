/*
	Calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo (“m”-masculino ou “f”-feminino).
	Utilize as seguintes fórmulas para cálculo do peso ideal:
	• Homem = (72,7 x altura) - 58
	• Mulher = (62,1 x altura) - 44,7
*/

#include <iostream>

using namespace std;

int main(){
	
	double peso, altura;
	
	char sexo;
	
	cout << "Informe seu sexo (m - para masculino e f - para feminino): ";
	
	cin >> sexo;
	
	cout << endl << "Informe sua altura: ";
	
	cin >> altura;
	
	if(sexo == 'm'){
		peso = (72.7 * altura) - 58;
		cout << endl << "Seu peso ideal e: " << peso << endl;
	}else {
		peso = (62.1 * altura) - 44.7;
		cout << endl << "Seu peso ideal e: " << peso << endl;
	}

}
