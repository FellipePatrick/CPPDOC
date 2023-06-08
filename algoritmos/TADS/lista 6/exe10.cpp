#include <iostream>

/*
    Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um 
    conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos, 
    altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados 
    e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo) das 
    mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja, vamos 
    apenas criar uma listagem dos homens e outra das mulheres 
*/

using namespace std;

const int n = 2; // so faltou fazer o programar pedir esse N

struct tPessoa{
    double altura, peso;
    string nome, corOlhos, data;
    char sexo;
};


int main(){
    int h=0, m=0;
    tPessoa mulher[n];
    tPessoa homem[n];
    char aux;
    for(int i = 0; i < n; i++){
        cout << "\nInforme o sexo da pessoa(m-masculino ou f-feminino): ";
        cin >> aux;
        if(aux == 'm'){
            homem[h].sexo = aux;
            getchar();
            cout << "\nInforme a cor dos olhos do homem: ";
            getline(cin, homem[h].corOlhos);
            cout << "\nInforme o nome do homem: ";
            getline(cin, homem[h].nome);
            cout << "\nInforme a data de nasacimento do homem: ";
            getline(cin, homem[h].data);
            cout << "\nInforme a altura e o peso do homem: ";
            cin >> homem[h].altura >> homem[h].peso;
            h++;
        }else{
            mulher[m].sexo = aux;
            getchar();
            cout << "\nInforme a cor dos olhos da mulher: ";
            getline(cin, mulher[m].corOlhos);
            cout << "\nInforme o nome da mulher: ";
            getline(cin, mulher[m].nome);
            cout << "\nInforme a data de nasacimento da mulher: ";
            getline(cin, mulher[m].data);
            cout << "\nInforme a altura e o peso da mulher: ";
            cin >> mulher[m].altura >> mulher[m].peso;
            m++;
        }
    }
    cout << "\nLista 1";
    for(int i = 0; i<h;i++){
        cout << endl << homem[i].altura << " " << homem[i].corOlhos<< " " << homem[i].data << " " << homem[i].nome << " " << homem[i].peso;
    }
    cout << "\nLista 2";
    for(int i = 0; i<m;i++){
        cout << endl << mulher[i].corOlhos<< " " << mulher[i].data << " " << mulher[i].nome << " " << mulher[i].peso << " " << mulher[i].altura ; 
    }
    return 0;
}