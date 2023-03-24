#include <iostream>
using namespace std;

int myFunction(int myNumbers[], int cont){
	int media = 0, total = 0;
	for(int i = 0; i < cont; i++ ){
		total += myNumbers[i];
	}
	media = total/cont;
	return media;
}

int main(){
	string resposta;
	int cont = 0, x, numero;
	cout << "Digite o numero de numeros que quer colocar na lista: " << endl;
	cin >> x;
	int lista[x];
	while(cont < x) {
		cout << "Informe um numero" << endl;
		cin >> numero;
		lista[cont] = numero;
		cont++;
	}
	int media = myFunction(lista, cont);
	cout << endl << media;
}
	
