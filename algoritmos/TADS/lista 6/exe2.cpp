/*
    Elabore um algoritmo que
    - Crie a estrutura tAnimal: Registro tAnimal:
    nome: string
    raca: string
    idade: int
    - Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais;
    - Verifique e escreva o nome do animal mais velho;
    - Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para 
    a busca. Se existir animal da raça procurada, informe seus dados (nome e idade);
*/

#include <iostream>

using namespace std;

struct Animal
{
    string nome, raca;
    int idade;
};


int main(){
    int const qtd = 2;
    Animal animal[qtd];
    string nomev;
    int velho;
    //bool flag = false;
    for(int i = 0; i < qtd; i++){
        cout << "\nDigite o nome do animal: ";
        getline(cin, animal[i].nome);
        cout << "\nDigite a raça do animal: ";
        getline(cin, animal[i].raca);
        cout << "\nDigite a idade do animal: ";
        cin >> animal[i].idade;
        getchar();
        if(i == 0){
            velho = animal[i].idade;
            nomev = animal[i].nome;
        }else{
            if(velho < animal[i].idade){
                velho = animal[i].idade;
                nomev = animal[i].nome;
            }
        }
        
    }
    cout << "\nO nome do animal mais velho é: " << nomev;
    return 0;
}