/*
	Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores
*/

#include <iostream>

using namespace std;

int main(){
	int i, n;
	cout << "Informe um numero: ";
	cin >> n;
	cout << "\nOs divisores de " << n << ": ";
	for(i = 1; i <= n; i++){
		if(n%i == 0){
			cout << i << " | " ;
		}
	}
	return 0;
}
