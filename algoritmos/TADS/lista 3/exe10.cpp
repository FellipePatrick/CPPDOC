/*
Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo
*/

#include <iostream>

using namespace std;

int main(){
  int n1, n2, n3, n4, soma = -1;
  bool res = true;
  while(res == true){
     while(soma < 0){
      cout << endl << "Digite o primeiro valor: ";
      cin >> n1;
      cout << endl << "Digite o segundo valor: ";
      cin >> n2;
      cout << endl << "Digite o terceiro valor: ";
      cin >> n3;
      cout << endl << "Digite o quarto valor: ";
      cin >> n4;
      soma = n1 + n2 + n3 + n4;
      cout << endl << "oiiiiiiiiii" << soma;
      if(soma == 0) {
          res = false; 
      }
  }
  cout << endl << "oi"; 
  }
  return 0;
}
