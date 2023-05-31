#include <iostream>

using namespace std;

struct Aluno{
	int id;
	string nome;
};

int main(){
	Aluno aluno[3];
	int contID = 0, res;
	do{
		cout << "------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t\t\t\t\tCADASTRO DE ALUNO\t\t\tAlunos:" << 0 << "\t\t Vagas: " << 5<< endl;
		cout << "\n------------------------------------------------------------------------------------------------------------------\n";
		cout << "\n\t1-Criar aluno\n\n\t2-Ver alunos\n\n\t3-Atualizar aluno\n\n\t4-Deletar Aluno\n\n\t5-Limpar tela\n\n\t6-Sair: ";
		cin >> res;
		switch(res){
			case 1:
				cout << "\n\tCriar aluno\n";
				break;
			case 2:
				cout << "\n\tRead\n";
				break;
			case 3:
				cout << "\n\tUpdate\n";
				break;
			case 4:
				cout << "\n\tDelete\n";
				break;
			case 5:
				cout << "\n\tClear\n";
				system("cls");
		}	
	}while(res != 6);
	return 0;
}
