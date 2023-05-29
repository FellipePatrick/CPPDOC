/*
 Elabore um algoritmo que leia duas strings e informe se são     iguais ou diferentes. Obs: Não utilize a função de 
comparação de strings.


*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string frase1, frase2;
  bool flag = true;
  int qtdF1, qtdF2;
  cout << "\nInforme a frase 1: ";
  getline(cin, frase1);
  cout << "\nInforme a frase 2: ";
  getline(cin, frase2);
  qtdF1 = frase1.size();
  qtdF2 = frase2.size();
  if(qtdF1 != qtdF2){
    cout << "\nAs frases não são iguais!";
  }else{
      for(int i = 0; i < qtdF1; i++){
      if(frase1[i] != frase2[i]){
        flag = false;
      }  
    }
    if(!flag){
      cout << "\nAs frases não são iguais!";
    }else{
      cout << "\nAs frases são iguais!";
    }
  }
  return 0;
}