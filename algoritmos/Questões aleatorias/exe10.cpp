#include <iostream>
using namespace std;

int main(){
	int numero, fat = 1;
	cout << "Informe um numero para saber seu fatorial: ";
	cin >> numero;
	if (numero < 0){
		cout << "Não é possivel fazer o fatorial de um numero negativo";
	}else{
		for(int i = numero; i > 0; i--){
			fat *= i;
			cout << fat << "\n";
		}
	}
}
