/*
  Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase
  completa e a frase contendo só

  as palavras em “posições ímpares” (1ª palavra, 3ª palavra, 5ª palavra, ...).

  Entrada: eu gosto de roupa azul

  Saída: eu de azul

*/

#include <iostream>

#include <string.h>

using namespace std;

int main() {
  string frase, fraseImpar;
  char c;
  int qtd, cont = 0, indice = 1, t = 0;
  cout << "Digite a frase completa: ";
  getline(cin, frase);
  qtd = frase.size();
  do {
    if (indice % 2 != 0) {
      c = frase[cont];
      do{
        cout << "do " << t << endl;
        fraseImpar[t] = c;
        t++;
        cont++;
        c = frase[cont];
      }while(c != ' ');
      cont++;
      indice++;
    }else{
      do{
        c = frase[cont];
        cont++;
      }while(c != ' ');
      cont++; 
      indice++;
      cout << "\n\n" << indice;
    }
  } while (cont < qtd);
  cout << indice << " " << cont;
  cin >> t;
  for(cont = 0; cont <= t; cont++){
    cout << fraseImpar[cont];
  }
  return 0;
}