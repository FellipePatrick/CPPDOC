/*
	O número 3025 possui a seguinte característica: 30+25 = 55 e 55^2 = 3025. Elaborar um algoritmo que leia
	N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e
	“negativo” se não tiver
*/

#include <iostream>
using namespace std;
int main(){
	//(N / 100) + (N % 100)  ai o resultado ^ 2 
  int inteiro, n, soma;
  float resto;
  do{
    cout << "Digite um numero com no maximo 4 algarismos: ";
    cin >> n;
  }while(n > 9999);
  inteiro = n/100;
  resto = n%100;
  soma = inteiro + resto;
  if((soma*soma)==n){
    cout << "\nO numero " << n << " é positivo!";
  }else{
    cout << "\nO numero " << n << " é negativo!";
  }
  return 0;
}



