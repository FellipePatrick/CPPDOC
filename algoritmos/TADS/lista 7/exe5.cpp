/*
    Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes 
    opções: soma, subtração, multiplicação e divisão. 
*/

#include <iostream>
using namespace std;
double soma(double n1, double n2);
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
int main(){
    int op;
    double result, n1, n2;
    cout << "Digite n1 e n2: ";
    cin >> n1 >> n2;
    cout << "\nDigite a opcao (1-soma 2-sub 3-mult 4-div): ";
    cin >> op;
    switch (op)
    {
    case 1:
        result = soma(n1, n2);
        break;
    case 2:
        result = sub(n1, n2);
        break;
    case 3:
        result = mult(n1, n2);
        break;
    case 4:
        result = soma(n1, n2);
        break;
    default:
        cout << "\nOpcao invalida";
        return 0;
        break;
    }
    cout << "\nResultado: " << result;
    return 0;
}
double soma(double n1, double n2){
    return n1+n2;
}
double sub(double n1, double n2){
    return n1-n2;
}
double mult(double n1, double n2){
    return n1*n2;
}
double div(double n1, double n2){
    return n1/n2;
}