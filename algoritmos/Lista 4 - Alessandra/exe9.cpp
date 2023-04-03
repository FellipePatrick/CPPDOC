/*
	Elabore um algoritmo que escreva os n primeiros termos da sequência: 1 1 2 3 5 8 13 21 34 55 89 …
*/

#include <iostream>

using namespace std;

int main(){
	int n, cont = 1;
	cout << "Informe um numero para saber os proximos pares: ";
	cin >> n;
	if(n > 0){
		cout << endl << "Os numeros primos da sequencia " << n << ": ";
		for(cont; cont <= 100; cont++){
			if(n%2!=0 && n != 2){
				cout << n << " ";
			}else if(n == 2){
				cout << n << " ";
			}
			n++;
		}
	}else{
		cout << endl << "Numero invalido!";
	}
	return 0;
}
