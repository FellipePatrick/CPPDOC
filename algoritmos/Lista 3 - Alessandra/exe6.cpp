/*
	Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos
	completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a
	carteira
*/

#include <iostream>

using namespace std;

int main(){
	int idade, falta;
	cout << "Digite sua idade: ";
	cin >> idade;
	if(idade >= 18){
		cout << endl << "Você tem idade para tirar carteira de habilitação!";
	}else {
		falta = 18 - idade;
		if(falta > 1){
			cout << endl << "Você não tem idade para tirar carteira de habilitação! Faltam " << falta << " anos";
		}else {
			cout << endl << "Você não tem idade para tirar carteira de habilitação! Falta " << falta << " ano";
		}
	}
}
