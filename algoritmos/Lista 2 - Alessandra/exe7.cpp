/*
	Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
	mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada
*/

#include <iostream>

using namespace std;

int main(){
	char character;
	int number;
	cout << "type it a number: ";
	cin >> number;
	cout << endl << "type it a character ( 'a' for predecessor or 's' for successor): ";
	cin >> character;
	if(character == 'a'){
		cout << number - 1;
		cout << endl << number - 2;
		cout << endl << number - 3;
		cout << endl << number - 4;
		cout << endl << number - 5;
		
	}else if(character == 's'){
		cout << endl << number + 1;
		cout << endl << number + 2;
		cout << endl << number + 3;
		cout << endl << number + 4;
		cout << endl << number + 5;
	}else{
		cout << endl << "ERROR IN SYSTEM, please type it 'a' or 's' for program work!";
	}
	return 0;
}
