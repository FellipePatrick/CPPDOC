/*
    Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra
   string, verifique e escreva se a palavra está contida na frase. Entradas:
   “esta é a frase” e “frase” Saída: a palavra “frase” está contida na frase
   “esta é a frase”.
*/

#include <iostream>

#include <string.h>

using namespace std;

int main() {
  string frase, palavra, aux;
  int tmnaux, cont = 0, tamanho, tf, a, m;
  bool flag = false;
  cout << "\nDigite uma frase: ";
  getline(cin, frase);
  cout << "\nDigite uma palavra para verificarmos se está na frase: ";
  cin >> palavra;
  tf = frase.size();
  tamanho = palavra.size();
  do {
    a = 0;
    for (int i = 0; i < tamanho; i++) {
      aux[i] = frase[cont + i];
      a++;
    }
    for (int i = 0; i < a; i++) {
      if (aux[i] == palavra[i]) {
        m++;
      }
    }
    if (m == tamanho) {
      flag = true;
    } else {
      m = 0;
      cont++;
    }
  } while (!flag && (cont < tf));
  if (flag == true) {
    cout << "\nA palavra " << palavra << " está na frase!";
  } else {
    cout << "\nA palavra " << palavra << " não está na frase!";
  }
  return 0;
}