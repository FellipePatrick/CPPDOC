/*
	Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos 
	pagam R$ 100 mais um adicional conforme a seguinte tabela: 
	• Crianças com menos de 10 anos pagam R$80; 
	• Conveniados com idade entre 10 e 30 anos pagam R$50; 
	• Conveniados com idade entre 31 e 60 anos pagam R$ 95; 
	• Conveniados com mais de 60 anos pagam R$130.
*/

#include <iostream>

using namespace std;

int main(){
	float valorTotal, valorFixo = 100, adicional;
	int idade;
	cout << "Informe sua idade: ";
	cin >> idade;
	if(idade > 0 && idade <= 120){
			if(idade < 10){
				adicional = 80;
				valorTotal = valorFixo + adicional;
				cout << endl << "O valor a ser pago é: " << valorTotal << " R$";
			}else if(idade >= 10 && idade <= 30){
				adicional = 30;
				valorTotal = valorFixo + adicional;
				cout << endl << "O valor a ser pago é: " << valorTotal << " R$";
			}else if(idade >= 31 && idade <= 60){
				adicional = 95;
				valorTotal = valorFixo + adicional;
				cout << endl << "O valor a ser pago é: " << valorTotal << " R$";
			}else if(idade >60){
				adicional = 130;
				valorTotal = valorFixo + adicional;
				cout << endl << "O valor a ser pago é: " << valorTotal << " R$";
			}
	}else{
		cout << endl << "Idade invalida";
	}
	return 0;
}
