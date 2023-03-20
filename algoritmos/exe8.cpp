#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Digite um numero para ser verificado:\n ";
	cin >> numero;
	if (numero > 0){
		cout << "O numero: " << numero << " é positivo";
	}else if(numero < 0){
		cout << "O numero: " << numero << " é negativo";
	}else if(numero == 0){
		cout << "O numero: " << numero << " é zero";
	}
}
