/*
    Elabore um algoritmo que leia dez conjuntos de dois valores, o primeiro representando a idade do aluno e o
    segundo representando a sua altura em metros, e armazene-os em dois vetores (Idade de Altura). Verifique
    e escreva a idade do aluno mais alto, a idade do aluno mais baixo e a média das alturas dos alunos maiores
    de idade
*/
#include <iostream>

using namespace std;

int main(){
    int const c = 3;
    int idade[c], idadeB, idadeA, resI, i, cont = 0;
    float altura[c], alunoA, resA, alunoB, media = 0;
    for(i = 0; i < c; i++){
        cout << "\nInforme a altura e a idade do aluno " << i + 1 << ": ";
        cin >> resA >> resI;
        if(i != 0){
            if(resA > alunoA){
                alunoA = resA;
                idadeA = resI;
                if(resI >= 18){
                    media += resI;
                    cont++;
                }
            }else if(resA < alunoB){
                alunoB = resA;
                idadeB = resI;
                if(resI >= 18){
                    media += resI;
                    cont++;
                }
            }
        }else{
            idade[i] = resI;
            altura[i] = resA;
            alunoA = resA;
            alunoB = resA;
            idadeB = resI;
            idadeA = resI;
            if(resI >= 18){
                media += resI;
                cont++;
            }
        }
    }
    cout << "\n\nA altura e a idade do aluno mais alta: " << alunoA << " e " << idadeA << "\n\nA altura e a idade do aluno mais baixa: " << alunoB << " e " << idadeB;
    media = media/cont;
    cout << "\n\nA media das alturas maiores de idade: " << media << " anos";
    return 0;
}
