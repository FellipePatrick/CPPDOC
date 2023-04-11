/*
	Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 3-
	Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o
	algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o
	resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair
*/

#include <iostream>
using namespace std;

int main() {
    int opcao;
    float area, base, altura, Base, lado;
    bool res = true;
    while(res == true){
      cout << "\n\nEscolha uma opção: \n1-Quadrado \n2-Circulo \n3-Triangulo \n4-Retangulo \n5-Trapezio \n6-Sair: ";
      cin >> opcao;
      if(opcao >= 1 && opcao < 6){
          if(opcao == 1){
              cout << "\nDigite o valor de um dos lados: ";
              cin >> lado;
              area = lado  * lado;
              cout << "\nA area desse quadrado é: " << area;
          }else if(opcao == 3){
              cout <<"\nDigite o valor da base e da altura do triangulo: "; 
              cin >> base >> altura;
              cout << "\nO valor da area desse triangulo é: " << area;
          }else if(opcao == 2){
              cout << endl << "\nDigite o raio do circulo: ";
              cin >> base;
              area = 3.14 * (base*base);
              cout << "\nO valor da area desse circulo é: " << area;
          }else if(opcao == 4){
              cout <<"\nDigite o valor da base e da altura do triangulo: "; 
              cin >> base >> altura;
              area = base*altura;
              cout << "\nO valor da area desse retangulo é: " << area;
          }else if(opcao == 5){
              cout <<"\nDigite o valor da base maior, da base menor e da altura do trapezio: "; 
              cin >> Base >> base >> altura;
              area = ((base*Base)/2)*altura;
              cout << "\nO valor da area desse retangulo é: " << area;
          }
      }else if(opcao == 6){
          res = false;
      }
    }
    cout << "\nFim!";
    return 0;
}
