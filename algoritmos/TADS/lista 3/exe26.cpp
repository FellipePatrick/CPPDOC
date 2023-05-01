/*
	Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de sexo (m=masculino,
	f=feminino) e altura de cada pessoa. Faça um programa que leia os dados de várias pessoas diferentes e
	informe:
	- A altura da mulher mais baixa;
	- A média de altura dos homens;
	- A média de altura da população.
	O algoritmo deve encerrar quando for digitado o valor “X” para altura.
*/

#include <iostream>

using namespace std;

int main(){
	bool flag = true;
	char sexo, res;
	float altura, baixaMulher = 0, mediaAlturaH = 0, mediaAlturaPop = 0;
	int contH = 0, cont = 0, contM = 1;
	do{
		cout << endl << "Digite o sexo das pessoas (m-masculino e f-feminino): ";
		cin >> sexo;
		if(sexo == 'm'){
			cout << endl << "Você quer digitar a altura (X-para sair ou C-para continuar): ";
			cin >> res;
			if(res == 'C'){
				contH++;
				cont++;
				cout << endl << "Digite a altura do homem: ";
				cin >> altura;
				mediaAlturaPop += altura;
				mediaAlturaH = (mediaAlturaH + (altura))/contH;
				altura = 0;
			}else{
				flag = false;
			}
		}else{
			cont++;
			cout << endl << "Você quer digitar a altura (X-para sair ou C-para continuar): ";
			cin >> res;
			if(res == 'C'){			
				cont++;
				do{
					cout<< endl << "Digite a altura da mulher: ";
					cin >> altura;
				}while(altura <= 0);
				mediaAlturaPop += altura;
				if(contM == 1){
					baixaMulher =  altura;
					contM = 0;
				}else{
					if(altura <= baixaMulher)
						baixaMulher = altura;	
				}
				altura = 0;
			}else{
				flag = false;
			}
		}
	}while(flag);
	mediaAlturaPop /= cont;
	cout << endl << "A media da altura da populacao eh: "<< mediaAlturaPop << " a mulher mais baixa eh: " << baixaMulher << "  media das alturas dos homens: " << mediaAlturaH ;
	return 0;
}
