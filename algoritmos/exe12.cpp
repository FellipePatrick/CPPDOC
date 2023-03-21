#include <iostream>
using namespace std;

int main(){
	int numeroVelho, numeroAtual, posicao;
	int vetor[5] =  {10, 90, 1, 3, 5};
	int lista[5];	
	numeroVelho = 1;
	for(int i = 0; i < 5; i++){
		if(vetor[i] > numeroVelho){
			numeroVelho = numeroVelho;
		}else{
			numeroVelho = vetor[i];
		}
	}
	for(int i = 0; i < 5; i++){
		posicao = vetor[i];
		for(int x = 0; x < 5; x++){
			if(vetor[x] > numeroVelho ){
				numeroAtual = numeroVelho;
			}else {
				numeroAtual = vetor[x];
			}
			cout << numeroAtual << " " << vetor[x] << endl;
		}
		lista[i] = numeroAtual;
		
	}
}
