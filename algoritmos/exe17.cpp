// Escreva um código que imprima as tabuadas de 1 até 10 de maneira organizada:
#include <iostream>
using namespace std;

int main(){
	int i, n = 1;
	while(n <= 10){
		cout << endl << "------- TABUADA DO " << n << " -------" << endl << endl;
		for(i = 1; i <=10; i++){
			int resultado = n * i;
			cout << n << " * " << i << " = " << resultado << endl;
		}
		n++;
	}
}
