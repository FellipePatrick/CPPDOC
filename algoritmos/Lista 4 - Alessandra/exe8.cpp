/*
	Elabore um algoritmo que escreva todos os números entre 1000 e 1999 que quando divididos por 10 
	resultam em um resto igual a 2
*/

#include <iostream>

using namespace std;

int main(){
	for(int i = 1000; i <= 1999; i++){
		if(i%10 == 2){
			cout << i << endl;
		}
	}
	return 0;
}
