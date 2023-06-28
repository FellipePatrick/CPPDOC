/*
    Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
    considerando-se apenas a maior nota de prova e a maior nota de trabalho. 
    
    Elabore um algoritmo que, dadas as quatro notas de um aluno, informe a sua média.
    
     Para isso, utilize 
    duas funções: uma que determine o maior valor entre as notas (de provas ou de 
    trabalhos) e outra que calcule a média aritmética das duas maiores notas
*/

#include <iostream>
using namespace std;
struct tNota
{
    double nota[4];
};
double maiorNota(double nota,tNota notas, int c);
double mediaNotas(tNota notas);
int main(){
    tNota notas;
    int maior;
    cout << "\nO programa so aceita notas maiores ou iguais a zero!";
    for(int i = 0; i < 4; i++){
        do{
            cout << "\nDigite a nota " << i+1 << ": ";
            cin >> notas.nota[i];
        }while(notas.nota[i] < 0);
        maior = maiorNota(notas.nota[i], notas, i);
    }
    cout << "\nA maior nota: " << maior;
    cout << "\nA media das duas maiores notas: " << mediaNotas(notas);
    return 0;
}
double maiorNota(double nota, tNota notas, int c){
    double maior = nota;
    for(int i = 0; i < c; i++){
        if(notas.nota[i] > maior){
            maior = notas.nota[i];
        }
    }
    return maior;
}
double mediaNotas(tNota notas){
    double media, maior[2];
    bool flag[4];
    for(int i = 0; i < 4; i++){
        flag[i] = false;
    }
    maior[0] = 0;
    maior[1] = 0;
    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 4; x++){
            if(notas.nota[x] > maior[i] && flag[x] == false){
                maior[i] = notas.nota[x];
                cout << "maior " << maior[i] << endl;
                flag[x] = true;
            }
        }
    }
    media = ((maior[0]+maior[1])/2);
    return media;
}