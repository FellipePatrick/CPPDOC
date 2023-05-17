/*
  21. Elabore um algoritmo que gere automaticamente um vetor de 30 elementos contendo a sequencia de
  números inteiros escolhida pelo usuário no menu abaixo:
  Menu Principal
  ------------------------------------------------------
  1 - Sequência de Fibonacci
  2 - Números Triangulares
  3 - Números Primos
  4 - Números Quadrangulares
  5 - Divisíveis por 3 e 5 simultaneamente
  6 - Sair
*/

#include <iostream>

using namespace std;

int main(){
  int number, vetor[30], i, a = 0, b = 1, auxiliar, ac = 1;
  bool flag;
  do{
    cout << "\n1 - Sequencia de Fibonacci\n2 - Números Triangulares\n3 - Números Primos\n4 - Números Quadrangulares\n5 - Divisíveis por 3 e 5 simnultaneamente\n6 - Sair: ";
    cin >> number;
    switch(number){
      case 1:
        a = 0, b = 1;
        cout << "\n[ ";
        for(i = 0; i < 30; i++){
          auxiliar = a + b;
          vetor[i] = auxiliar;
          a = b;
          b = auxiliar;
          cout << vetor[i] << " ";
        }
        cout << "]\n";
        break;
      case 2:
        b = 1, ac = 1;
        cout << "\n[ ";
        for(i = 0; i < 30; i++){
          vetor[i] = ac;
          b++;
          ac += b;
          cout << vetor[i] << " ";
        }
        cout << "]\n";
        break;
      case 3:
        a = 0;
        cout << "\n[ ";
        for(i = 0; i < 30; i++){
          flag = false; 
          do{
             a++;
             b = 0;
             for(int x = 1; x <= a; x++){
               if(a%x == 0){
                  b++;
               }
             }
             if(b <= 2){
                flag = true;
             }
           }while(flag == false);
           vetor[i] = a;
           cout << vetor[i] << " ";
        }
        cout << "]\n";
        break;
      case 4:
        b = 1;
        cout << "\n[ ";
        for(i = 0; i < 30; i++){
           vetor[i] = b * b;
           b++;
           cout << vetor[i] << " ";
        }
        cout << "]\n";
        break;
      case 5:
        a = 0;
        cout << "\n[ ";
        for(i = 0; i < 30; i++){
          flag = false;
          do{
            a++;
            if(a%3 == 0 && a%5 == 0){
              flag = true;
            }
          }while(flag == false);
        vetor[i] = a;
        cout << vetor[i] << " ";
        }
        cout << "]\n";
        break;
    }
  }while(number != 6);
  cout << "\nFim do programa!";
  return 0;
}
