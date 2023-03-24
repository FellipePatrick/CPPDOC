/*
	Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual aplicado ao número
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	double percentual, resultado;
	cout << "Digite um numero: " << endl;
	cin >> n;
	cout << "Digite o percentual que vai ser aplicado nele: " << endl;
	cin >> percentual;
	resultado = n + (n * (percentual/100));
	cout << endl << "O resultado depois do percentual " << percentual/100 << " ser aplicado e: " << resultado; 
}
