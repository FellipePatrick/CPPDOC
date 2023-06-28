/*
    Faça uma função que recebe um número inteiro por parâmetro e retorna 
    verdadeiro se ele for par e falso se for ímpar
*/
#include <iostream> 
using namespace std;
bool getBool(int n);
int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    if(getBool(n)){
        cout << "\nFalso!";
    }else{
        cout << "\nVerdadeiro!";
    }
    return 0;
}
bool getBool(int n){
    if(n%2 == 0){
        return false;
    }else{
        return true;
    }
}