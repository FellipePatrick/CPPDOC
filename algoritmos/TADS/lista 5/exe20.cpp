/*
  Elabore um algoritmo que receba um nome completo em uma string e apresente
  apenas o último nome e o 1º nome na seguinte forma: último nome, 1º nome.
  Entrada: Ana Fernandes Oliveira
  Saída: Oliveira, Ana
*/

#include <iostream>

#include <string.h>

using namespace std;

int main() {
  char p;
  string nomeCompleto, nome, sobrenome;
  int qtdN = 0, qtdS = 0, i;
  bool flag = true;
  cout << "\nInforme o seu nome completo: ";
  getline(cin, nomeCompleto);
  i = nomeCompleto.size() - 1;
  do { // Achar o sobrenome
        p = nomeCompleto[i];
        if (p != ' ') {
        sobrenome[qtdS] = p;
        qtdS++;
        i--;
        } else {
        flag = false;
        }
  } while (flag && i >= 0);
  i = 0;
  flag = true;
  do { // Achar o nome
        p = nomeCompleto[i];
        if (p != ' ') {
        nome[qtdN] = p;
        qtdN++;
        i++;
        } else {
        flag = false;
        }
  } while (flag);
  cout << endl;
  for (i = qtdS; i >= 0; i--) {
    cout << sobrenome[i];
  }
  cout << ", ";
  for (i = 0; i <= qtdN; i++) {
    cout << nome[i];
  }
  return 0;
}