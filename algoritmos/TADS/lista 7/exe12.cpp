/*
    Escreva uma função hm que converta minutos em horas-e-minutos. A função 
    recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores 
    a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. 
    Elabore um algoritmo que teste a função hm. 
*/
#include <iostream>
using namespace std;
void converte(int mnts, int *h, int *m);
int main(){
    int mnts, h = 0, m;
    cout << "\nDigite os minutos totais: ";
    cin >> mnts;
    converte(mnts, &h, &m);
    cout << "\nTime: " << h << " hrs " << m << " min";
    return 0;
}
void converte(int mnts, int *h, int *m){
    cout << "\nentrou mnts: " << mnts;
    do{
        mnts -= 60;
        cout << "\ndividiu mnts: " << mnts;
        *h = *h + 1;
    }while(mnts > 59);
    *m = mnts;
}
