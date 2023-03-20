#include <iostream>
using namespace std;

int main(){
	int n1, n2, menor, mdc, cont=0;
	cout << "Digite dois numeros inteiros: \n";
	cin >> n1 >> n2;
	menor = n1 < n2 ? n1 : n2;
	for(int i = 1; i <= menor; i++){
		if(n1%i== 0 and n2%i == 0){
			cont++;
		}
	}
	int list[cont];
	int n = 0;
	for(int i = 1; i <= menor; i++){
		if(n1%i== 0 and n2%i == 0){
			mdc = i;
			list[n] = mdc;
			n++;
		}
	}	
	cout << "O MDC entre " << n1 << " e " << n2 << " é " << mdc <<endl <<  "\n";
	for(int x =  0; x < cont; x++){
		cout << list[x] << "\n";
	}
    return 0;
}
