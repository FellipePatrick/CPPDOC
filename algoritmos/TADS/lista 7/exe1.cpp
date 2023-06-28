/*
    Numa disciplina são dadas duas provas e dois trabalhos, mas a 
    
    média é calculada  considerando-se apenas a maior nota de prova e a maior nota de trabalho. 
    
    Elabore um algoritmo que, dadas as quatro notas de um aluno, informe a sua média.
    
     Para isso, utilize 
    duas funções: uma que determine o maior valor entre as notas (de provas ou de 
    trabalhos) e outra que calcule a média aritmética das duas maiores notas
*/
#include <iostream>
using namespace std;
double mediaT(double *maiorT, double *maiorP);
void maior( double *vetor,double *ad);
int main(){
    double maiorTra, maiorPro;
    double notas[2];
    for(int i = 0; i < 2; i++){
        if(i == 0){
            cout << "\nDigite a nota 1 e nota 2 da prova: ";
            cin >> notas[0] >> notas[1];
            maior(notas, &maiorPro);

        }else{
            cout << "\nDigite a nota 1 e nota 2 do trabalho: ";
            cin >> notas[0] >> notas[1];
            maior(notas, &maiorTra);
        }
    }
    cout << "\n\nMaior nota do trabalho: " << maiorTra;
    cout << "\n\nMaior nota da prova: " << maiorPro;
    cout << "\n\nMedia entre as duas notas: "<< mediaT(&maiorTra, &maiorPro);
    return 0;
}
double mediaT(double *maiorT, double *maiorP){
    return (*maiorT+*maiorP)/2;
}
void maior(double *vetor, double *ad){
    if(vetor[0] >= vetor[1]){
        *ad = vetor[0];
    }else{
        *ad = vetor[1];
    }
}