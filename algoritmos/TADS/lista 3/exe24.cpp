/*
	Elabore um algoritmo que leia um número inteiro e escreva o seu fatorial. Ex.: Fatorial de 4 = 4! = 4 X 3 X
	2 X 1 = 24. Após o fatorial, verifique e escreva o próximo número divisível pelo número digitado
*/

#include <iostream>

using namespace std;

int main(){
	int n, fat = 1;
	cout << "Digite um numero: ";
	cin >> n;
	for(int i = n; 0 < i; i--){
		fat *= i;
	}
	cout << endl << "O fatorial de " << n << " é: "<< fat;
	return 0;
}
