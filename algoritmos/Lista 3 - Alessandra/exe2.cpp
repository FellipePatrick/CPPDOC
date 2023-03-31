#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um número inteiro maior do que zero: ";
    cin >> numero;

    if (numero <= 0 || numero > 99999) {
        cout << "Número inválido." << endl;
        return 0;
    }
    
    // seguindo o exemplo com 281 o resultado 11

    int digito = numero / 10000; 
    soma += digito; // aqui ele soma zero
    numero %= 10000; 

    digito = numero / 1000;
    soma += digito; // aqui ele soma zero
    numero %= 1000;

    digito = numero / 100;
    soma += digito; // aqui ele soma 2
    numero %= 100;

    digito = numero / 10;
    soma += digito; // aqui ele soma 8
    numero %= 10;

    soma += numero; // aqui ele soma 1

    cout << "A soma dos algarismos é " << soma << "." << endl;

    return 0;
}

