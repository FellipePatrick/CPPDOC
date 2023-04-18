/*
	Escreva um algoritmo que encontre o n-ésimo número primo maior que 11, sendo n um número digitado
	pelo usuário
*/

#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Informe um numero para sabermos o proximo n-esimo primo: ";
	cin >> n;
	do{
		if(n > 11 && n%2 != 0){
			cout << endl << "Esse é o proximo numero primo: " << n;
			return false;	
		}
		n++;
	}while(true);
	return 0;
}
