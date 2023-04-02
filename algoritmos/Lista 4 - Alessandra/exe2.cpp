/*
	Elabore um algoritmo que escreva as tabuadas dos números 1 a 10, conforme o exemplo abaixo
*/

#include <iostream>

using namespace std;

int main(){
	for(int i = 1; i <= 10; i++){
		cout<< endl << "-------------- TABUADA DO " << i << " --------------"<< endl<< endl;
		for(int x = 1; x <= 10; x++){
			cout << i << " * " << x << " = " << i*x << endl;
		}
	}
	return 0;
}
