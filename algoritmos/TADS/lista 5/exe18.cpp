/*
    Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C. 
    Entradas: “frase 1” e “outra frase qualquer” 
    Saída: “frase 1 outra frase qualquer”
*/

#include <iostream>

using namespace std;

int main(){
    string a, b, c;
    cout << "\nInforme o valor da string A: ";
    getline(cin, a);
    cout << "\nInforme o valor da string B: ";
    getline(cin, b);
    c = a + " " + b;
    cout << endl << c;
    return 0;
}