/* 
	Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
	conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
	calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
	aumento. Mostre o salário antigo, o novo salário e a diferença
*/

#include <iostream>

using namespace std;

int main(){
	int codigo;
	double salario, novoSalario, diferenca;
	cout << "Informe seu salario: ";
	cin >> salario;
	cout << endl << "Informe o codigo do cargo: ";
	cin >> codigo;
	if(codigo == 101){
		novoSalario = salario + (salario * 0.1);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else if(codigo == 102){
		novoSalario = salario + (salario * 0.2);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else if(codigo == 103){
		novoSalario = salario + (salario * 0.3);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}else{
		novoSalario = salario + (salario * 0.4);
		diferenca = novoSalario - salario;
		cout << endl << "Seu antigo salario era: " << salario << "R$, seu novo salario e: " << novoSalario << "R$ e a diferenca e: " << diferenca << "R$" << endl;
	}
	return 0;
}
