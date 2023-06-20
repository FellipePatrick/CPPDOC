#include <iostream>
using namespace std;
void retornaString(string texto){
    int qtd;
    qtd = texto.size();
    for(int i = (qtd - 1); qtd >= 0; i--){
        cout << texto[i];
    }
    cout << endl;
}
int main(){
    string text;
    cout << "\nDigite um texto que quer inverter: ";
    getline(cin, text);
    retornaString(text);
    cout << "\nFim do Programa!";
    return 0;
}