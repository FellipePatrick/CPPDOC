/*
	Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte
	maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa
	do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de
	xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e
	assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar
	ao monge a partir da leitura do número da casa desejada.
*/

#include <iostream>

using namespace std;

int main(){
	float armazenaProduto, numero;
	cout << "Digite o numero da casa:";
	cin >> numero;
	for(int i = 0; i <= numero; i++){
		if(i == 0){
			armazenaProduto = 1;
		}else{
			armazenaProduto = 2 * armazenaProduto;
		}
	}
	cout << endl << "O valor total a pagar em graos e: " << armazenaProduto << " graos";
	return 0;
}
