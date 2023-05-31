#include <iostream>

using namespace std;

struct Aluno{
	string nome;
	string matricula;
};

int main(){
	int const qtd = 3;
	string auxString;
	bool flag;
	Aluno aluno[qtd];
	int contID = 0, res, cont = 0, x, r, indice;
	do{
		cout << "------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t\t\t\t\tCADASTRO DE ALUNO\t\t\tAlunos:" << cont << "\t\t Vagas: " << qtd - cont<< endl;
		cout << "\n------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t1-Criar aluno\n\n\t2-Ver alunos\n\n\t3-Atualizar aluno\n\n\t4-Deletar Aluno\n\n\t5-Sair: ";
		cin >> res;
		switch(res){
			case 1:
				getchar();
				cout << "\n\tDigite o nome do aluno: ";
                getline(cin, aluno[cont].nome);
                cout << "\n\tDigite a matricula do aluno: ";
                getline(cin, aluno[cont].matricula);
                cont++;
                system("cls");
				break;
			case 2:
				system("cls");
                x = 0;
                cout << "\n\tID\t\tNOME\t\t\tMATRICULA\n";
				for(int i = 0; i < cont; i++){
                    if(aluno[i].nome != " "){
                    	x++;
                    	cout << "\n\t" << x << "\t\t"<< aluno[i].nome << "\t\t\t" << aluno[i].matricula << endl;
					}
                }
                cout << endl << endl << "\tDigite algum numero para continuar: ";
                cin >> res;
                system("cls");
				break;
			case 3:
				getchar();
				cout << "\n\tDigite a matricula do aluno que voce que atualizar: ";
				getline(cin, auxString);
				//verificar qual é o indice
				x = 0;
				do{
					if(aluno[x].matricula == auxString){
						flag = false;
						indice = x;
					}else{
						x++;	
					}
				}while(flag && x < cont);
				x = 0;
				if(flag){
					cout << "\n\tMatricula não encontrada";
				}else{
					do{
						cout << "\n\tInforme o que voce deseja atualizar\n\n\t1-Nome\n\n\t2-Matricula\n\n\t3-Sair: ";
						cin >> x;
						switch(x){
							case 1:
								getchar();
								cout << "\n\tDigite o novo nome do aluno: ";
								getline(cin, aluno[indice].nome);
								system("cls");
								break;
							case 2:
								getchar();
								cout << "\n\tDigite a nova matricula do aluno: ";
								getline(cin, aluno[indice].nome);
								system("cls");
								break;
							case 3:
								system("cls");
						}
					}while(x != 3);
				}
				break;
			case 4:
				cout << "\n\tDelete\n";
				break;
			default:
				system("cls");
				cout << "\n\tFim do Programa!\n";
		}	
	}while(res != 5);
	return 0;
}
