/*
	Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e
	escreva-os na ordem solicitada
*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	char character;
	cout << "type it n1: ";
	cin >> n1;
	cout << endl << "type it n2: ";
	cin >> n2;
	cout << endl << "type it n3: ";
	cin >> n3;
	cout << endl << "type it 'c' for order crescent or 'd' for descending: ";
	cin >> character;
	bool condition1 = n1 > n2 && n1 > n3;
	bool condition2 = n2 > n1 && n2 > n3;
	bool condition3 = n3 > n1 && n3 > n2;
	
	if(condition1){
		if(n2 > n3){
			// n1 > n2 > n3
			if(character == 'd'){
				cout << endl << n1 << " " << n2 << " " << n3 << endl;
			}else if(character == 'c'){
				cout << endl << n3 << " " << n2 << " " << n1 << endl;
			}
		}else{
			// n1 > n3 > n2
			if(character == 'd'){
				cout << endl << n1 << " " << n3 << " " << n2 << endl;
			}else if(character == 'c'){
				cout << endl << n2 << " " << n3 << " " << n1 << endl;
			}		
		}		
	}else if(condition2){
		if(n1 > n3){
			// n2 > n1 > n3
			if(character == 'd'){
				cout << endl << n2 << " " << n1 << " " << n3 << endl;
			}else if(character == 'c'){
				cout << endl << n3 << " " << n1 << " " << n2 << endl;
			}
			
		}else{
			// n2 > n3 > n1
			if(character == 'd'){
				cout << endl << n2 << " " << n3 << " " << n1 << endl;
			}else if(character == 'c'){
				cout << endl << n1 << " " << n3 << " " << n2 << endl;
			}
		}
	}else if(condition3){
		if(n1 > n2){
			// n3 > n1 > n2
			if(character == 'd'){
				cout << endl << n3 << " " << n1 << " " << n2 << endl;
			}else if(character == 'c'){
				cout << endl << n2 << " " << n1 << " " << n3 << endl;
			}
		}else{
			// n3 > n2 > n1
			if(character == 'd'){
				cout << endl << n3 << " " << n2 << " " << n1 << endl;
			}else if(character == 'c'){
				cout << endl << n1 << " " << n2 << " " << n3 << endl;
			}
		}
	}
	return 0;
}
