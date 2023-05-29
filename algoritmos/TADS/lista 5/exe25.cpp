/*
  Elabore um algoritmo que leia uma string, verifique e informe se trata-se ou
  não de um palíndromo. Lembrando que um palíndromo é uma palavra que tenha a
  propriedade de poder ser lida tanto da direita para a esquerda quanto da
  esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string frase, fraseSemEspaco;
  int qtd, qtdF, x;
  bool flag = true;
  cout << "\nInforme a frase: ";
  getline(cin, frase);
  qtd = frase.size() - 1;
  x = qtd;
  for (int i = 0; i <= qtd; i++) {
    if (frase[i] != frase[x]) {
      flag = false;
    }
    x--;
  }
  if (!flag) {
    cout << "\nNão é um palindromo!";
  } else {
    cout << "\nÉ um palindromo!";
  }
  return 0;
}