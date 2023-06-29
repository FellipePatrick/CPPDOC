#include <iostream>
using namespace std;
int printMenu();
struct tData
{
    int dia, mes, ano;  
};

void ordem(int *v, char letra);
bool posicoes(tData *v);
int qtd = 3;
int main(){
    int op, vetor[qtd];
    tData datas[qtd];
    char letra;
    do{
        op = printMenu();
        switch (op)
        {
            case 1:
                cout << "\nAlimente o vetor de " << qtd << " posicoes \n";
                for(int i = 0; i < qtd; i++){
                    cout << ": ";
                    cin >> vetor[i];
                }
                cout << "\nDigite a ordem que deseja (c-crescente ou d-decrescente): ";
                cin >> letra;
                ordem(vetor, letra);
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
                break;
            case 4:
                /* code */
                break;
            case 5:
                /* code */
                break;
            case 6:
                cout << "\nFim do Programa!";
                break;
            default:
                cout << "\nOpcao invalida!";
                break;
        }
        cout << endl;
        system("pause");
        system("cls");
    }while(op != 6);
   return 0;
}
void ordem(int *v, char letra){
    int aux = 0, a;
    if(letra == 'c'){
        cout << "\nCrescente { ";
        for(int i = 0; i < qtd;i++){
            for(int x = aux; x < qtd; x++){
                if(v[i] > v[x]){
                    a = v[i];
                    v[i] = v[x];
                    v[x] = a;
                }
            }
            cout << v[i] << " ";
            aux++;
        }
        cout << "}\n";
    }else{
        if(letra == 'd'){
            cout << "\nDecrescente { ";
            for(int i = 0; i < qtd;i++){
                for(int x = aux; x < qtd; x++){
                    if(v[i] < v[x]){
                        a = v[i];
                        v[i] = v[x];
                        v[x] = a;
                    }
                }
                cout << v[i] << " ";
                aux++;
            }
            cout << "}\n";
        }else{
            cout << "\nOpcao Invalida!";
        }
    }
}
int printMenu(){
    int op;
    cout << "-------------------------------------\n";
    cout << "\t    MENU PRINCIPAL\n";
    cout << "-------------------------------------\n";
    cout << "\n1 - ORDEM\n2 - DATA\n3 - SALARIO\n4 - MULTA\n5 - CALCULAR\n6 - SAIR\n";
    cout << "-------------------------------------\n";
    cout << "\n: ";
    cin >> op;
    return op;
}