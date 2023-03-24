// Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias

#include <iostream>

using namespace std;

int main(){
	int anos, meses, dias, totalDias;
	cout << "Digite quantos anos a pessoa tem: " << endl;
	cin >> anos;
	cout << "Digite quantos meses: " << endl;
	cin >> meses;
	cout << "Digite quantos dias: " << endl;
	cin >> dias;
	totalDias = (anos * 365) + (meses * 30) + dias;	
	cout << "O total de dias que voce viveu, aproximadamente: " << totalDias << " dias";
}
