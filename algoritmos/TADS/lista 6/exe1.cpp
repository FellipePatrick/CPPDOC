/*
    Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
    endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
    todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.
*/

#include <iostream>

using namespace std;

struct Endereco
{
    string cidade;
    string rua;
    string bairro;
    int numero;
};

struct Aluno
{
    string matricula;
    string nome;
    Endereco endereco;
    double media;
};

int main(){
    Aluno aluno[2];
    int i;
    for(i = 0; i < 2; i++){
        cout << "\nDigite seu nome aluno " << i+1 << ": " ; 
        getline(cin, aluno[i].nome);
        cout << "\nDigite os 3 numeros da sua matricula: ";
        getline(cin, aluno[i].matricula);
        cout << "\nDigite a sua media: ";
        cin >> aluno[i].media;
        if(aluno[i].media > 5){
            aluno[i].media += 0.5;
        }
        cout << "\nDigite sua cidade:";
        getline(cin, aluno[i].endereco.cidade);
        cout << "\nDigite sua rua:";
        getline(cin, aluno[i].endereco.rua);
        cout << "\nDigite seu bairro:";
        getline(cin, aluno[i].endereco.bairro);
        cout << "\nDigite seu numero:";
        cin >> aluno[i].endereco.numero;
    }
    return 0;
}