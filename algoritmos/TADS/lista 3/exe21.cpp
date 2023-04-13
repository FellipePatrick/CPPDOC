/*
	Escreva um algoritmo que auxilie o controle de entradas de um museu, dependendo da idade do
	visitante. Considere que:
	- Crianças com idade < 6 anos não pagam.
	- Crianças de 6 a 12 anos pagam 30%.
	- De 13 a 18 anos, e acima de 60 anos, pagam 50%.
	- Os demais pagam 100%.
	O algoritmo deve ler, inicialmente, o preço da entrada para aquele dia (sem desconto). Em seguida deve
	solicitar a idade do visitante e informar o valor que ele deverá pagar. O algoritmo deve parar de solicitar
	a idade do visitante quando for digitado 0 para a idade. Ao final, o algoritmo deverá escrever dois totais:
	o total de dinheiro arrecadado e o total de desconto concedido pelo museu naquele dia.
*/

#include <iostream>

using namespace std;

int main(){
	int idade;
	float totalDinheiro = 0, valor, totalDesconto = 0, desconto;
	cout << "Digite o valor do ingresso para hoje: ";
	cin >> valor;
	do{
		cout << endl << "Digite a idade do visitante: ";
		cin >> idade;
		if(idade < 6){
			totalDinheiro += 0;
		}else{
			if(idade >= 6 && idade <= 12){
				desconto = 0.3;
			}else if( (idade >= 13 && idade <= 18) && idade >= 60){
				desconto = 0.5;
			}else{
				desconto = 0;
			}
			totalDinheiro += valor - (desconto * valor);
			totalDesconto += (desconto * valor);
		}
		
	}while(idade != 0);
	cout << endl << "O valor total de descontos foi de: " << totalDesconto << " R$ e o total arrecadado foi de:" << totalDinheiro << " R$";
	return 0;
}
