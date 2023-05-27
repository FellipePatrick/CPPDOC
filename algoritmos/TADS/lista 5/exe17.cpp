/*
    Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre,
   para cada letra, o número de vezes que a mesma aparece na frase. Entrada:
   “uma frase qualquer” Saída: “u” aparece 3 vezes “m” aparece 1 vez “a” aparece
   3 vezes “f” aparece 1 vez “r” aparece 2 vezes “s” aparece 1 vez “e” aparece 2
   vezes “q” aparece 2 vezes “l” aparece 1 vez
*/

// vou ter que pegar um character e ver quantas vezes ele apareceu e armazenar
// em um vetor

#include <iostream>

#include <string.h>

using namespace std;

int main() {
  int i, cont = 0, tamanhoFrase, m = 0;
  string frase, auxfrase, letra;
  bool flag = true, aux = false;
  cout << "\nInforme a frase: ";
  getline(cin, frase); // se todos forem diferentes ai sim eu somo
  tamanhoFrase = frase.size();
  auxfrase[0] = frase[0];
  int a = 0;
  for (i = 1; i < tamanhoFrase; i++) {
    m = 0;
    for (int x = 0; x < a; x++) {
      if (auxfrase[x] != frase[i]) {
        m++;
      }
    }
    if (m == a) {
      auxfrase[a] = frase[i];
      a++;
    }
  }
  int vetor[a];
  do {
    m = 0;
    for (i = 0; i < tamanhoFrase; i++) {
      if (auxfrase[cont] == frase[i]) {
        m++;
      }
    }
    vetor[cont] = m;
    cont++;
  } while (cont < a);
  for (i = 0; i < a; i++) {
    cout << "O character " << auxfrase[i] << " se repete: ";
    cout << vetor[i] << " vezes" << endl;
  }
  return 0;
}