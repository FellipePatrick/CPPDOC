/*
	Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos
	elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P
	= [2 4]
*/

#include <iostream>
using namespace std;
int main(){
	int x, vetor[10], p[10], par = 0;;
	for(x = 0; x < 11; x++){
        cout << "\nInforme o valor do vetor na posicao " << x << " :";
        cin >> vetor[x];
        if(vetor[x]%2 == 0){
        	p[x] = x;
		}else{
			p[x] = 0;
		}
    }
    cout << endl << "O conjunto de indices [ ";
	for(x = 0; x < 11; x++){
    	if(p[x] != 0)
    		cout << p[x] << " ";
	}
	cout << "]";
	return 0;
}
