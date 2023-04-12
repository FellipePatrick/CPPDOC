/*
. Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, o produto dos três dígitos
dos números. Por exemplo, inicialmente o programa irá exibir:
100 = 0 (1*0*0)
101 = 0 (1*0*1)
102 = 0 (1*0*2)
(...)
110 = 0 (1*1*0)
111 = 1 (1*1*1)
112 = 2 (1*1*2)
(...)
999 = 9*9*9=729
Faça o seu algoritmo dar uma pausa a cada 20 linhas para que seja possível ver todos os números pouco
a pouco. Solicite que seja pressionada alguma tecla para ver a próxima sequência de números.
*/


#include <iostream>

using namespace std;

int main(){
	int test, cont = 0;		
	for(int centena = 1; centena <= 9; centena++){
		 for(int dezena = 0; dezena <= 9; dezena++){
	       	   for(int unidade = 0; unidade <= 9; unidade++){
	            	cout << endl << centena << dezena << unidade << " = " << centena << " * " << dezena << " * " << unidade << " = " << centena * dezena * unidade;
	        		cont++;
	        		if(cont == 20){ 
					    cout << "type a integer number for the code cotinued";
	        			cin >> test;
	        			cont = 0;
					}
				} 
	 	   }
	} 
}
