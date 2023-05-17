/*
	Elabore um algoritmo que leia dois vetores de inteiros X e Y, cada um com 5 elementos (não permita
elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores
resultantes:
	a. Soma: soma dos elementos de X e Y de mesmo índice;
	b. Distância: distância entre os elementos de X e Y de mesmo índice;
*/
#include <iostream>
using namespace std;
int main(){
	int X[5], y[5], x, n, i = 0, soma = 0, distancia = 0;
	bool dif = true;
	for(x=0;x<5;x++){
		do{
			cout << "\nInforme o valor da posicao " << x << " no vetor x: ";
			cin >> n;
      dif = true;
			for(i = 0; i <= x; i++){
          if(X[i] == n){
              dif = false;
              cout << "\nJa existe esse valor!";
          }
      }
		}while(dif == false);
		X[x] = n;
    do{
			cout << "\nInforme o valor da posicao " << x << " no vetor y: ";
			cin >> n;
      dif = true;
			for(i = 0; i <= x; i++){
          if(y[i] == n){
              dif = false;
              cout << "\nJa existe esse valor!";
          }
      }
		}while(dif == false);
		y[x] = n;
    soma += (y[x]+X[x]);
	}
	cout << "\nA soma\t" << soma << "\n";
	for(x = 0; x < 5; x++){
		distancia = X[x] - y[x];
    if(distancia < 0){
        distancia *=(-1);
    }
    cout << "\n\tA distancia entre "<< X[x]<< " e " << y[x] << ": " << distancia << "\n";
	}
	return 0;
}
