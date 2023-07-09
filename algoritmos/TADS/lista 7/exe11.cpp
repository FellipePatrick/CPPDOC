#include <iostream>
using namespace std;
int printMenu();
struct tData {
    int dia;
    int mes;
    int ano;
};
struct tAluno
{
    int percentual = 0;
    float nota = 0;
};

bool* validaData( tData* data);
float retornaSalario(float salario, int filhos);
void ordem(int *v, char letra);
void multa(float velocidade, float velocidadeP);
tAluno percentual(char (&matriz)[2][2]);
int qtd = 3;
int main(){
    int op, vetor[qtd], filhos;
    float salario, velocidade, velocidadeP;
    tData data[5];
    tAluno aluno;
    char matriz[2][2];
    bool *validade;
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
               for(int i = 0; i < 5; i++){
                cout << "\nDigite o dia, mes e ano (4 3 2005): ";
                cin >> data[i].dia >> data[i].mes >> data[i].ano;
               }
               validade = validaData(data);
               cout << endl;
               for(int i = 0; i < 5; i++){
                    if(validade[i]){
                        cout << "true";
                    }else{
                        cout << "false";
                    }
                    if(i != 4){
                        cout << ", ";
                    }
               }
               break;
            case 3:
                cout << "\nDigite a quantidade de filhos e o seu salario: ";
                cin >> filhos >> salario;
                if(filhos != 0){
                    salario = retornaSalario(salario, filhos);
                    cout << "\nO valor liquido do seu salario eh: " << salario << " R$\n";
                }else{
                    cout << "\nO seu salário é todo para o seu próprio custeio!\n";
                }
                break;
            case 4:
                cout << "\nDigite a velocidade que voce estava e a velocidade da pista: ";
                cin >> velocidade >> velocidadeP;
                multa(velocidade, velocidadeP);
                break;
            case 5:
                cout << "\nForneca as respostas e gabarito abaixo\n";
                cout << "\nRespostas do aluno\n";
                for(int i = 0; i < 2; i++){
                    cout << ": ";
                    cin >> matriz[0][i];
                }
                cout << "\nGabarito\n";
                for(int i = 0; i < 2; i++){
                    cout << ": ";
                    cin >> matriz[1][i];
                }
                aluno = percentual(matriz);
                cout << "\nNota do aluno:" << aluno.nota;
                cout << "\nPercentual do aluno: " << aluno.percentual;
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
tAluno percentual(char (&matriz)[2][2]){
    tAluno aluno;
    for(int i = 0; i < 2; i++){
        if(matriz[0][i] == matriz[1][i]){
            aluno.percentual++;
            aluno.nota +=1.5;
        }
    }
    return aluno;
}
void multa(float velocidade, float velocidadeP){
    cout << "\nO valor da multa eh: ";
    if(velocidade - velocidadeP <= 0){
        cout << "0 R$";
    }else{
        if((velocidade - velocidadeP) >= 31){
            cout << "200 R$";
        }else{
            if((velocidade - velocidadeP) >= 11){
                cout << "100 R$";
            }else{
                if((velocidade - velocidadeP) >= 1){
                    cout << "50 R$";
                }
            }   
        }
    }
    cout << endl;
}
float retornaSalario(float salario, int filhos){
    if(filhos >= 5){
        salario = salario/2;
    }else{
        salario = salario - (salario*(filhos * 0.1));
    }
    return salario;
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
bool* validaData( tData* data) {
    bool data_valida[5], *ponteiro;
    for(int i = 0; i < 5;i++){
        if (data[i].mes == 2) {
            if((data[i].ano % 4 == 0 && data[i].ano % 100 != 0) || (data[i].ano % 400 == 0)){
                if (data[i].dia < 1 || data[i].dia > 29) {
                    data_valida[i] = false;
                }
            }else{
                if (data[i].dia < 1 || data[i].dia > 28) {
                    data_valida[i] = false;
                }
            }
        } else if (data[i].mes == 4 || data[i].mes == 6 || data[i].mes == 9 || data[i].mes == 11) {
            if (data[i].dia < 1 || data[i].dia > 30) {
                data_valida[i] = false;
            }
        } else {
            if (data[i].dia < 1 || data[i].dia > 31) {
                data_valida[i] = false;
            }
        }
    }
    ponteiro = data_valida;
    return ponteiro;
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