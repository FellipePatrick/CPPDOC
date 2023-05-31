/*

	PROJETO DE CRUD DE ALUNOS EM ALGORTIMOS

*/

/*

	// Prender para so poder criar quando tiver vagas
	
	// 
*/

#include <iostream>

using namespace std;

struct Aluno{
	string nome;
	string matricula;
};

void clear(){
	system("cls");
}

void stop(){
	int resp;
	cout << endl << endl << "\tDigite algum numero para continuar: ";
    cin >> resp;
    system("cls");
}

int main(){
	int const qtd = 3;
	string auxString;
	string matriculas[qtd];
	bool flag, equals;
	Aluno aluno[qtd];
	int contID = 0, res, cont = 0, x, r, indice;
	do{
		cout << "------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t\t\t\t\tCADASTRO DE ALUNO\t\t\tAlunos:" << cont << "\t\t Vagas: " << qtd - cont<< endl;
		cout << "\n------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t1-Criar aluno\n\n\t2-Ver alunos\n\n\t3-Atualizar aluno\n\n\t4-Deletar Aluno\n\n\t5-Limpar\n\n\t6-Sair: ";
		cin >> res;
		switch(res){
			case 1:
				equals = true;
				if(qtd - cont != 0 ){
					getchar();
					cout << "\n\tDigite o nome do aluno: ";
	                getline(cin, aluno[cont].nome);
	                cout << "\n\tDigite a matricula do aluno: ";
	                getline(cin, auxString);
	                if(cont != 0){
	                	for(int i = 0; i < cont; i++){
	                		if(matriculas[i] == auxString){
	                			equals = false;
							}
						}
						if(equals){
							aluno[cont].matricula = auxString;
							matriculas[cont] = auxString;
							cont++;
						}else{
							cout << "\n\tMatricula ja existente!";
							stop();
						}
					}else{
						aluno[cont].matricula = auxString;
	                	matriculas[cont] = auxString;
	                	cont++;	
					}
	                clear();
				}else{
					cout << "\n\tNumero de vagas esgotadas, delete um aluno para abrir uma vaga!\n\n";
				}
				break;
			case 2:
				clear();
                x = 0;
                cout << "\n\tID\t\tNOME\t\t\tMATRICULA\n";
				if(qtd - cont == qtd){
					cout << "\n\n\t- Nenhum aluno foi cadastrado até o momento!\n";
				}else{
					for(int i = 0; i < cont; i++){
	                    if(aluno[i].nome != " "){
	                    	x++;
	                    	cout << "\n\t" << x << "\t\t"<< aluno[i].nome << "\t\t\t" << aluno[i].matricula << endl;
						}
                	}
				}
				stop();
				break;
			case 3:
				getchar();
				cout << "\n\tDigite a matricula do aluno que voce que atualizar: ";
				getline(cin, auxString);
				//verificar qual é o indice
				x = 0;
				flag = true;
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
					cout << "\n\tMatricula não encontrada\n";
					cout << endl << endl << "\tDigite algum numero para continuar: ";
               		cin >> res;
                	clear();
				}else{
					do{
						cout << "\n\tInforme o que voce deseja atualizar\n\n\t1-Nome\n\n\t2-Matricula\n\n\t3-Sair: ";
						cin >> x;
						switch(x){
							case 1:
								getchar();
								cout << "\n\tDigite o novo nome do aluno: ";
								getline(cin, aluno[indice].nome);
								clear();
								break;
							case 2:
								getchar();
								cout << "\n\tDigite a nova matricula do aluno: ";
								getline(cin, aluno[indice].nome);
								clear();
								break;
							case 3:
								clear();
						}
					}while(x != 3);
				}
				break;
			case 4:
				//Pegar o indice para o vetor de matriculas e de alunos e substituir tudo por ' '
				getchar();
				cout << "\n\tDigite a matricula do aluno que voce que excluir: ";
				getline(cin, auxString);
				//verificar qual é o indice
				x = 0;
				flag = true;
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
					cout << "\n\tMatricula não encontrada\n";
					cout << endl << endl << "\tDigite algum numero para continuar: ";
               		cin >> res;
                	clear();
				}else{
					aluno[indice].matricula = " ";
					aluno[indice].nome = " ";
					matriculas[indice] = " ";
					cont--;
					cout << "\n\n\tO aluno foi deletado com sucesso!";
					stop();
				}
				break;
			case 5:
				clear();
				break;
			default:
				clear();
				cout << "\nFim do Programa!\n";
		}	
	}while(res != 6);
	return 0;
}
