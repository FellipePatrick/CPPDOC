/*
    19. Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada. 
    Entrada: “uma frase qualquer” 
    Saída: “reuqlauq esarf amu” 
*/

#include <iostream>

#include <string.h>

using namespace std;

int main(){
    int i, qtd;
    string a, b;
    cout << "\nInforme o valor da string A: ";
    getline(cin, a);
    qtd = a.size() - 1;
    cout << endl;
    for(i = qtd; i >= 0; i--){
        cout << a[i];
    }
    return 0;
}