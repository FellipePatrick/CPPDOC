/*
	Elabore um algoritmo que leia N dígitos numéricos, e gere um único número decimal. Ex: (2,3,2,0) = 2320.
*/
#include <iostream>
using namespace std;
int main(){
  int digito, final = 0, percentual = 1;
  char res;
  do{
    cout << "\nDigite um numero: ";
    cin >> digito;
    final += (digito * percentual);
    cout << "\nDeseja digitar mais algum numero(S-sim N-não): ";
    cin >> res;
    percentual *= 10;
  }while(res == 'S');
  cout << "\nO numero resultante é: " << final;
  return 0;
}
