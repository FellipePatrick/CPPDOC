/*
	Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
	não se aposentar. As condições para aposentadoria são:
	• Ter pelo menos 65 anos;
	• Ou ter trabalhado pelo menos 30 anos;
	• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
*/

#include <iostream>

using namespace std;

int main(){
	int idade, tempoServico;
	cout  <<  "Digite qual sua idade: ";
	cin >> idade;
	cout << endl << "Digite quantos anos de servico voce tem: ";
	cin >> tempoServico;
	bool condition = idade >= 60 and tempoServico >= 25;
	if(condition or idade >= 65 or  tempoServico >= 30){
		cout << endl << "Voce pode se aposentar!";
	}else {
		cout << endl << "Voce nao pode se aposentar!" << endl ;
	}
	return 0;
	
}
