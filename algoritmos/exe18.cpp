/*
	1 - Escreva um código que leia o valor de 10 compras
	2 - Calcule a média das compras
	3 - Imprima a menor compra;
	4 - Imprima a maior compra;
	5 - Imprima a diferença de valor entre a maior e menor compra
	6 - Imprima o lucro da loja, sabendo que ela compra um produto e vende 30% mais caro
*/

#include <iostream>
using namespace std;

int main(){
	
	int cont = 1;
	
	double mediaCompras, maiorCompra = 0, menor, diferenca, lucroLoja, valor, total;
	
	cout << "Informe o valor da compra: " << endl;
	
	cin >> valor;
	
	menor = valor;
	
	total+= valor;
	
	while(cont < 3){
	
		cout << "Informe o valor da compra: " << endl;
	
		cin >> valor;
	
		total += valor;
	
		if(valor < menor){
			menor = valor;
		}	
	
		if(valor > maiorCompra){
			maiorCompra = valor;
		}
		cont ++;
	}
	
	mediaCompras = total/cont;
	
	lucroLoja = total * 0.3;
	
	diferenca = maiorCompra - menor;
	
	cout << endl << "Esta foi a maior compra: " << maiorCompra << endl << endl << "Esta foi a menor: " << menor << endl ;
	
	cout << endl << "Aqui esta a diferenca entre eles: " << diferenca << endl;
	
	cout << endl << "Aqui esta o valor medio das compras: " << mediaCompras << endl;
	
	cout << endl << "Aqui esta o lucro da loja: " << lucroLoja << endl;
}
