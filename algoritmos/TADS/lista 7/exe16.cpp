#include <iostream>
using namespace std;
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); 
int* aloca(int *x3);
int main(){
    int n1, n2, n3;
    int x1[n1], x2[n2],x3[n1+n2], qtd, *end;
    cout << "Digite os elementos de x1!\n";
    for(int i = 0; i < 3; i++){
        cout << ": ";
        cin >> x1[i];
    }
    cout << "\nDigite os elementos de x2!\n";
    for(int i = 0; i < 2; i++){
        cout << ": ";
        cin >> x2[i];
    }
    end = uniao(x1, x2, 3, 2, &qtd);
    cout << "{ ";
    for(int i = 0; i < qtd; i++){
        cout << x3[i];
    }
    cout << "}";
    return 0;
}
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){
    int aux = n1 + n2;
    *qtd = aux;
    int x3[aux], *pont, min = 0;
    for(int i = 0; i < aux; i++){
        if(i < n1){
            x3[i] = x1[i];

        }else{
            x3[i] = x2[min];
            min++;
        }
    }
    pont = x3;
    return pont;
}

int* aloca(int *x3){
    int* point = x3;
    return point;
}