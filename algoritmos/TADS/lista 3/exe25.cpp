/*
	Elabore um algoritmo que leia o gabarito correto de uma prova com 10 quest�es e os gabaritos de
	respostas de N alunos de uma turma. Calcule e mostre o n�mero de erros e acertos de cada aluno e a
	m�dia de acertos da turma. Considere como respostas poss�veis para cada quest�o as alternativas �a�, �b�,
	�c� e �d�
*/

#include <iostream>

using namespace std;

int main(){
	int cont = 1, qtdErros = 0, qtdAcertos = 0, mediaTurma = 0, globalPoint = 1;
	char q1, q2, q3, q4, q5, res;
	bool flag = true, fla = true;
	cout << "Informe as repostas das quest�es de 1 a 5 (a-b-c-d): ";
	cin >> q1 >> q2 >> q3 >> q4 >> q5;
	do{
		do{
			cout << endl << " Informe a resposta para a quest�o " << cont << " (a-b-c-d): ";
			cin >> res;
			switch(cont){
				case 1:
					if(res == q1){
						qtdAcertos+=1;	
					}else{
						qtdErros +=1;
					}
					break;
				case 2:
					if(res == q2){
						qtdAcertos+=1;	
					}else{
						qtdErros +=1;
					}
					break;
				case 3:
					if(res == q3){
						qtdAcertos+=1;	
					}else{
						qtdErros +=1;
					}
					break;
				case 4:
					if(res == q4){
						qtdAcertos+=1;	
					}else{
						qtdErros +=1;
					}
					break;
				case 5:
					if(res == q5){
						qtdAcertos+=1;	
					}else{
						qtdErros +=1;
					}
					break;
			}
			cont ++;
			if(cont == 6){
				cout << endl << "A quantidade de acertos desse aluno foi: " << qtdAcertos << " e a quantidade de erros foi: " << qtdErros;
				flag = false;
				cont = 1;
			}
		}while(flag);
		cout << endl << endl << "Ainda tem alunos para a verifica��o(s-n): ";
		cin >> res;
		mediaTurma += qtdAcertos;
		if(res == 'n'){
			fla = false;
		}else{
			globalPoint ++;	
			qtdAcertos, qtdErros = 0;
			cont = 1;		
		}
	}while(fla);
	mediaTurma = mediaTurma/globalPoint;
	cout << endl << "A media da turma foi de: " << mediaTurma << " acertos por aluno";
	return 0;
}
