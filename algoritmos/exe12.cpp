#include <iostream>
using namespace std;

int main(){
	int numero1, numero2;
	int vetor[5] =  {10, 90, 1, 3, 5};
	int lista[5];
	for(int i = 0; i < 5; i++){
		numero1 = vetor[i];
		for(int x = 0; x < 5; x++){
			numero2 = vetor[x];
			if(numero2 > numero1){
				lista[i] = numero1;
			}else{
				lista[i] = numero2;
			}
		}
	}
	for(int i = 0; i < 5; i++){
		cout << lista[i] << " ";
	}
}
