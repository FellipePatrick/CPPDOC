/*
	Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
	triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
	não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
	• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
	• Equiláteros: tem os comprimentos dos três lados iguais;
	• Isósceles: tem os comprimentos de dois lados iguais;
	• Escaleno: tem os comprimentos dos três lados diferentes
	
	obs.: não uso acento, pois a ide que uso DEV++ não consegue ler direito, não sou analfabeto! 
*/

#include <iostream>

using namespace std;

int main(){
	int x, y, z;
	cout << "Digite o valor para x: ";
	cin >> x;
	cout << endl << "Digite o valor para y: ";
	cin >> y;
	cout << endl << "Digite o valor para z: ";
	cin >> z;
	if(x < y + z && y < x + z && z < x + y){
		if(x != y && x!=z && y!=z){
			cout << endl << "E um triangulo escaleno"<< endl;
		}else if(x == y && x == z && z == y ){
			cout << endl << "E um triangulo Equilatero"<< endl;
		}else{
			cout << endl << "E um triangulo Isoscele"<< endl;
		}
	}else {
		cout << endl << "Nao e um triangulo"<< endl;
	}
	return 0;
}
