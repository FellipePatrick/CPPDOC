/*
	14. Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou
		seja, se a sua leitura em qualquer direção é a mesma.
	15. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 é um palíndromo, pois se for lido de frente para trás ou de trás para
		frente terá exatamente os mesmos elementos.
*/
#include <iostream>

using namespace std;

int main(){
	int vetor[6], x;
	bool flag = true;
	for(x = 0; x < 6; x++){
		cout << "\nInforme o valor no indice " << x << ": ";
		cin >> vetor[x];
	}
	x = 0;
	do{
		cout << endl << "entrei";
		if(vetor[x] == vetor[5-x]){
			x++;
		}else{
			flag = false;
			cout << "\nNao eh palindromo";
			return 0;
		}
	}while(flag == true && x < 6);
	cout << "\nO vetor eh um palindromo";
	return 0;
}

