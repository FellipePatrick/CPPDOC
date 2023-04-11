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
  float n1, n2, n3, n4, soma = 1, quadrado, cubo;
  bool res = true;
  while(res == true){
    if(soma != 0){
        cout << endl << "Digite o primeiro valor: ";
        cin >> n1;
        cout << endl << "Digite o segundo valor: ";
        cin >> n2;
        cout << endl << "Digite o terceiro valor: ";
        cin >> n3;
        cout<< endl << "Digite o quarto valor: ";
        cin >> n4;
        soma = n1 + n2 + n3 + n4;
        if(soma > 0){
          cout << "VALOR   1  //  VALOR   2  //  VALOR   3  //  VALOR   4";
          cout << endl << "QUADRADO   " << n1 * n1 << "  //  " << n2 * n2 << "  //  " << n3 * n3 << "  //  " << n4 * n4;
          cout << endl << "CUBO   " << n1 * n1 * n1<< "  //  " << n2 * n2 * n2 << "  //  " << n3 * n3 * n3 << "  //  " << n4 * n4 * n4 << endl;
        }else if(soma < 0){
          soma = 1;
          cout << endl << "A soma deu negativa, por favor digite numeros para que essa seja positiva!" << endl;
        }
    }else{
      cout << endl << "Você so digitou 0 e com isso o programa se encerra!";
      res = false;
    }
  }
  return 0;
}
