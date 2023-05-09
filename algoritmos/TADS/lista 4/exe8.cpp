/*
	Elabore um algoritmo que leia dois vetores, A (10 elementos inteiros) e B (12 elementos inteiros), e escreva
	todos os elementos comuns aos dois vetores
*/

#include<iostream>
using namespace std;

int main(){
    int A[3], B[4], mult[4], cont = 0, x = 0;
    bool flag = false;
    for(int x = 0; x < 4; x++){
        if(x < 3){
            cout << "\nInforme o valor de A na posicao " << x << " :";
            cin >> A[x];
         }
         cout << "\nInforme o valor de B na posicao " << x << " :";
         cin >> B[x];
    }
    for(int i = 0; i < 4; i++){
		flag = false;
		do{
    		if(A[i] == B[x]){
    			mult[i] = B[x];
    			flag = true;
    			x = 0;
    			cont = 0;
			}else{
				mult[i] = 0;
				x++;
				cont++;
			}
		}while(cont<5 && flag == false);
	}
	cout << "[ ";
    for(int x = 0; x < 4; x++){
        if(mult[x] != 0 ){
        	cout << mult[x] << " ";
		}
    }
    cout << "]";
    return 0;
}
