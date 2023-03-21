#include <iostream>
using namespace std;

int main(){
	int numero, proximoN, cont;
	cout << "Digite um numero que você queira ver o proximo primo: " << endl;
	cin >> numero;
	bool res = false;
	cont = numero;
	while(res == false){
		cont++;
		if(cont == 2){
			res = true;
		}else{
			if(cont%2 != 0.0){
				res = true;
			}
		}
	}
	cout << cont;
}
