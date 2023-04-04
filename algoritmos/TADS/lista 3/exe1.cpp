/*
	Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da 
	pessoa mais velha e a idade da pessoa mais nova	
*/

#include <iostream>

using namespace std;

int main(){
	int codigo, idade, resIdade, menorIdade, resCodigo;
	cout << "Informe a idade: ";
	cin >> idade;
	menorIdade = idade;
	cout << endl << "Informe o codigo;";
	cin >> codigo;
	for(int i = 1; i <= 2; i++){
		cout << endl << "Informe a idade: ";
		cin >> resIdade;
		cout << endl << "Informe o codigo;";
		cin >> resCodigo;
		if(resIdade > idade){
			codigo = resCodigo;
			idade = resIdade;
		}else if(resIdade < idade){
			menorIdade = resIdade;
			idade = resIdade;
		}
	}
	cout << endl << "Menor idade: " << menorIdade << " anos, codigo da pessoa mais velha: " << codigo;
	return 0;
	
}
