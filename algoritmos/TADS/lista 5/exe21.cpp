/*
  Elabore um algoritmo que declare duas strings e leia a primeira string. Em
  seguida, 
  
  copie o texto da primeira string para a segunda em letras maiúsculas se a primeira letra da primeira string for minúscula 
  
  ou em letras minúsculas se a primeira letra da primeira string for maiúscula. 
  
  Imprima no final o conteúdo das duas strings.
*/

#include <iostream>

#include <string.h>

using namespace std;

int main() {
  string primeira, segunda;
  int c;
  char aux;
  int qtd, i, cont;
  cout << "\nDigite a palavra: ";
  cin >> primeira;
  qtd = primeira.size() - 1;
  c = primeira[0];
  aux = c;
  if(c > 96){ // transformar em maiuscula
      for(i = 0; i <= qtd; i++){
        c = primeira[i];
        if(c > 96){
            c -= 32;
        }
        aux = c;
        segunda[i] = aux;
        cout << segunda[i];
      }   
  }else{
    if(c < 97){ // transformar em minuscula
      for(i = 0; i <= qtd; i++){
        c = primeira[i];
        if(c < 97){
            c += 32;
        }
        aux = c;
        segunda[i] = aux;
        cout << segunda[i];
      }
    }
  }
  return 0;
}