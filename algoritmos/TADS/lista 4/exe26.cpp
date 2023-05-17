/*
    Elabore um algoritmo que leia um vetor de 15 posições de inteiros e o compacte, ou seja, elimine as posições
    com valores iguais a zero. Para isso todos os elementos à frente do valor zero devem ser movidos uma posição
    para trás no vetor.
*/
#include <iostream>
using namespace std;
int main(){
    int const c = 4;
    int i, ant,cont, vetor[c], n, b = 0; 
    bool flag = true;
    for(i = 0; i < c; i++){
        cout << "\nInforme o valor da posição " << i << ": ";
        cin >> vetor[i];
    }
    for(int i = 0; i < c; i++){
        cont = 0;
        do{
            flag = true;
            if(vetor[i] > 0 || vetor[i] < 0){
                n = vetor[i];
            }
            cout << "\n" << n;
            for(int x = 0; x < i; x++){
                if(vetor[x] == 0){
                    vetor[x] = n;
                    b++;
                    flag = false;
                }
            }
            cont++;
        }while(flag == true && cont < i);
    }
  cout << "\n[ ";
    for(i = 0; i < c; i++){
          if(i != 0){
            if(vetor[i] != ant){
              cout << vetor[i] << " " ;
              ant = vetor[i];
            }
          }else{
            cout << vetor[i] << " ";
            ant = vetor[i];
          }
          
    }
  cout << "]\n";
    cout << "\nFim do Programa!";
    return 0;
}
