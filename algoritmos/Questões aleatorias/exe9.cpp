#include <iostream>
using namespace std;

int main(){
	double n1, n2, soma, subtracao, divisao, multiplicacao;
	cout << "informe um numero: ";
	cin >> n1;
	cout << "informe outro numero: ";
	cin >> n2;
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = n1/n2;
	multiplicacao = n1*n2;
	cout << "resultado da soma, subtracao, divisao e multiplicacao em sequencia: " <<  soma << "; " <<subtracao << "; "<< divisao << "; "<<multiplicacao << "";
}
