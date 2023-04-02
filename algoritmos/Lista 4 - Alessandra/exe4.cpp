/*
	Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a
	operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele
	digite enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1;
	4 – 2 / 1 + 4 = 6. O algoritmo deve resolver a expressão na ordem de digitação
*/

#include <iostream>

using namespace std;

int main(){
	float n1, n2, total = 0;
	string  res;
	while(res!="="){
		cout << "Digite um numero: " << endl;
		cin >> n1;
		cout <<"Informe a operação(+,-,*,/,=): " << endl;
		cin >> res;
		if(res!="="){
			cout << "Digite outro numero: " << endl;
			cin >> n2;
			if(res == "+"){
				total += n1 + n2;
			}else if( res == "-"){
				total += n1 - n2;
			}else if( res == "*"){
				total += n1 * n2;
			}else if( res == "/"){
				total += n1 / n2;
			}else{
				cout << endl << "Operador invalido!" << endl;
			}
		}
	}
	cout << "O total das operações que você resultou em: " << total;
	return 0;
}
