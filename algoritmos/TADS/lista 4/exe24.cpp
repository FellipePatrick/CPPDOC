/*
    Elabore um algoritmo que leia um vetor B de 10 elementos (considere que podem existir elementos
    repetidos). Em seguida mova para um vetor C apenas os elementos de B que não se repetem, deixando em B
    o elemento -1 em cada posição substituindo o elemento que foi movido. Ao final escreva o vetor C
*/
#include <iostream>

using namespace std;

int main(){
    int const n = 3;
    int i, x,cont = 0, vetor[n], c[n];
    bool flag = false;
    for(i = 0; i < n; i++){
        cout << "\nDigite o valor na posição " << i << ": ";
        cin >> vetor[i];
    }
    for(i = 0; i < n; i++){
      flag = false;
      cout << i << "--\n";
      for(x = 1; x<= n; x++){
        cout << vetor[i] << " || " << vetor[x] << endl;
        if(vetor[i] == vetor[x]){
          cout << "\nIF1\n";
          flag = true;
        }
      }
      if(flag == false){
        cout << "\nEntrei aqui";
        c[i] = vetor[i];
      }
    }
    return 0;
}
