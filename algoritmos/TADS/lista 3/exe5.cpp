/*
	Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
	até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
	aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
	as matrículas de todos os alunos que obtiveram médias superiores a 9
*/

#include <iostream>

using namespace std;

int main(){
	int matricula, qtdReprovados, qtdAprovados, qtdRecuperacao;
	float mediaFinal = 0, res;
	
	do{
		cout << endl << "Informe a matricula do aluno: ";
		cin >> matricula;
		cout << endl << "Informe a media do aluno: ";
		cin >> res;
		if(res >= 7 && res < 9){
			qtdAprovados ++;
		}else if( res >= 9){
			cout << endl << "O aluno de matriula " << matricula << " teve media execelente que é maior ou igual a 9!" << endl;
		}else if(res < 3 && res > 0){
			qtdReprovados ++;
		}else if(res >= 3 && res < 7 ){
			qtdRecuperacao ++;
		}
	}while(res > 0);
	
	cout << endl << " " << qtdRecuperacao;
	
	return 0;
}
