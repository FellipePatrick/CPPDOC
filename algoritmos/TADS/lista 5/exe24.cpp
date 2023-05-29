/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia.
É um tipo de substituição na qual cada letra do texto é substituída por outra,
que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo,
com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria
‘E’, e assim por diante. Elabore um algoritmo que utilize o Código de César (n
posições, sendo n informado pelo usuário), entre com uma string e escreva a
string codificada. Exemplo: para n=3, a string “a ligeira raposa marrom saltou
sobre o cachorro cansado” seria codificada para “D OLJHLUD UDSRVD PDUURP VDOWRX
VREUH R FDFKRUUR FDQVDGR”.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main() {
  string frase;
  char c;
  int aux, n, qtd;
  cout << "Informe o fator de cesar: ";
  cin >> n;
  getchar();
  cout << "\nInforme a frase para se decodificada: ";
  getline(cin, frase); 
  qtd = frase.size();
  cout << "\nA frase decodificada com o fator de cesar " << n <<" é: ";
  for(int i = 0; i < qtd; i++){
      c = frase[i];
      if(c != ' '){
        aux = c + n;
        c = aux;
        frase[i] = c;
      }
      cout << frase[i];
  }
  return 0;
}