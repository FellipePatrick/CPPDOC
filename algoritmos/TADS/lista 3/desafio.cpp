#include <iostream>

using namespace std;

int main(){
	int escolha, idade;
	float x, nota, frequencia, valorFinal;
	char sexo;
	bool flag = true;
	do{
		cout << "\n\t---------------------------------------------";
		cout << "\n\t\t   MENU PRINCIPAL";
		cout << "\n\t---------------------------------------------";
		cout << "\n\t\t1 - VERIFICAR CLASSE ELEITORAL\n\t\t2 - CALCULAR f(x)\n\t\t3 - VERIFICAR SITUAÇÃO DO ALUNO";
		cout << "\n\t\t4 - INFORMAR TOTAL DA COMPRA\n\t\t5 - JOGO DA VELHA\n\t\t6 - SAIR\n\t\t7 - CLEAR \n\t\t";
		cin >> escolha;
		cout << "\n\t---------------------------------------------";
		switch(escolha){
			case 1:
				cout << "\n\t---------------------------------------------";
				cout << "\n\t\tDigite sua idade: ";
				cin >> idade;
				if(idade < 16){
					cout << "\n\t\tNÃO ELEITOR";
				}else if(idade >= 18 && idade < 65){
					cout << "\n\t\tELEITOR OBRIGATORIO";
				}else{
					cout << "\n\t\tELEITOR FACULTATIVO";
				}
				break;
			case 2:
				cout << "\n\t---------------------------------------------";
				cout << "\n\t\tINFORME O VALOR DE X: ";
				cin >> x;
				if(x <= 1){
					cout << "\n\t\tO VALOR DE X = 1";
				}else if(x > 1 && x <= 2){
					cout << "\n\t\tO VALOR DE X = 2";
				}else if(x > 2 && x <= 3){
					cout << "\n\t\tO VALOR DE X = " << x*x;
				}else{
					cout << "\n\t\tO VALOR DE X = " << x*x*x;
				}
				break;
			case 3:
				cout << "\n\t---------------------------------------------";
				cout << "\n\t\tDIGITE SUA FREQUENCIA: ";
				cin >> frequencia;
				cout << "\n\t\tDIGITE SUA NOTA: ";
				cin >> nota;
				if((frequencia >= 75 && frequencia <= 100) && (nota >= 7 && nota <= 10)){
					cout << "\n\t\tAPROVADO";
				}else if((frequencia >= 75 && frequencia <= 100) && (nota >= 3 && nota <= 7)){
					cout << "\n\t\tEXAME FINAL";
				}else{
					cout << "\n\t\tREPROVADO!";
				} 
				break;
			case 4:
				cout << "\n\t---------------------------------------------";
				cout << "\n\t\tINFOME O VALOR DA COMPRA: ";
				cin >> valorFinal;
				cout << "\n\t\tINFOME A SUA IDADE: ";
				cin >> idade;
				cout << "\n\t\tINFOME SEU SEXO (m-masculino ou f-feminino): ";
				cin >> sexo;
				
				if(idade >= 60){
					valorFinal = valorFinal - (valorFinal * 0.25);
				}
				if(sexo == 'f'){
					valorFinal = valorFinal - (valorFinal * 0.1);
				}
				cout << "\n\t\tO VALOR FINAL DA COMPRA COM OS DESCONTOS: " << valorFinal << " R$";
				break;		
			case 5:
				cout << "\n\t---------------------------------------------";
				cout << "\n\t\tVerificar classe";
				break;		
			case 6:
				flag = false;
				break;
			case 7:
				system("cls");
				break;	
			default:
				cout << "\n\t\tOpção errada, escolha novamente!";		
		}	
	}while(flag == true);
	cout << "\nFim!";
	return 0;
}
