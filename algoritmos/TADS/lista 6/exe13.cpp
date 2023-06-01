/*
    Elabore um algoritmo que: 
    - Crie o registro tProduto: Registro tProduto: 
    descricao: string 
    quantidade: int 
    precoUnitario: float 
    subTotal: float 
    Obs: o campo subtotal deve ser 
    calculado automaticamente, sendo 
    ele resultante da quantidade x 
    preço unitário do produto.
    - Crie o registro tNotaFiscal Registro tNotaFiscal:
    numero: int 
    data: string 
    itens: tProduto[5] 
    total: float 
    Obs: o campo total deve ser 
    calculado automaticamente, sendo 
    ele a soma de todos os SubTotais 
    dos produtos cadastrados. 
    - Declare um vetor NotasFiscais (5 posições de tNotaFiscal) e leia seus dados. 
    - Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário: 
    MENU PRINCIPAL _
    2– RELATÓRIO DE NOTAS FISCAIS 
    3– BUSCAR NOTA POR NUMERO 
    4– EXIBIR NOTA COM MAIOR VALOR TOTAL 
    5– EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA 
    SUA DESCRIÇÃO 
    6 – EXIBIR MÉDIA DO TOTAL DAS NOTAS 
    7 – SAIR
    - Se o usuário escolher a opção 1, o algoritmo deverá mostrar todos os dados de todas as 
    notas cadastradas. 
    - Se o usuário escolher a opção 2, solicite o número da nota e faça a busca. Se existir, mostre 
    seus produtos. Se não existir, informe. 
    - Se o usuário escolher a opção 3, mostre os dados da nota que tem o maior valor total. - Se 
    o usuário escolher a opção 4, solicite a descrição do produto, calcule e mostre o somatório 
    de todas as quantidades vendidas daquele produto em todas as notas. 
    - Se o usuário escolher a opção 5, calcule e mostre a média de todos os totais das notas. 
    - Se o usuário escolher a opção 6, finalize o sistema. 
*/

#include <iostream>

using namespace std;

struct tProduto
{
    string descricao;
    int quantidade;
    float precoUnitario;
    float subTotal;
};

struct tNotaFiscal{
    int numero;
    string data;
    tProduto itens[1];
    float total;
};

void cabecelhoP(string texto, int cont, int qtd){
    cout << "\n----------------------------------------------------------------------------\n";
	cout << "\t\t\tMENU PRINCIPAL        Cadastrados: " << cont << "  A cadastrar: " << qtd - cont;
	cout << "\n----------------------------------------------------------------------------\n";
}

void cabecelho(string texto){
    cout << "\n----------------------------------------------------------------------------\n";
	cout << "\t\t\t"<<texto;;
	cout << "\n----------------------------------------------------------------------------\n";
}


int main(){
    int const qtd = 1;
    tNotaFiscal NotasFiscais[qtd];
    int res, cont = 0;
    double soma = 0;
    do{
        cabecelhoP("MENU PRINCIPAL", cont, qtd);
		cout << "\n\t1-Relatorio de notas Fiscais\n\n\t2-Buscar nota por numero\n\n\t3-Exivir nota com maior valor total";
		cout << "\n\n\t4-Exibir a quantidade total vendida de um produto pela descrição\n\n\t5-Exibir media total das notas\n\n\t6-Cadastrar Produto\n\n\t7-Sair: ";
		cin >> res;
		switch(res){
			case 1:
				if(cont != 0){
					system("cls");
					cout << "\n\tDigite a nota fiscal que voc� quer ver de 0 " << cont << ": ";
					cin >> res;
					system("cls");
					if(res >= 0 || res <= qtd){
						cabecelho("NOTA FISCAL");
						cout << "\n\tNOME\t\tQUANTIDADE\tPRECO(U)\tTOTAL(P)";
						for(int i = 0; i < qtd; i++){
							cout << "\n\t" << NotasFiscais[res].itens[i].descricao << "\t\t" << NotasFiscais[res].itens[i].quantidade << "\t\t" << NotasFiscais[res].itens[i].precoUnitario << " R$";
							cout << "\t\t" << NotasFiscais[res].itens[i].subTotal << " R$";  
						}	
					}
                    cout << "\n\n";
                    system("pause");
				}else{
					cout << "\n\tNenhum item cadastrado, cadastre!\n\n\t";
					system("pause");
					system("cls");
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
                cout << "\noi";
                system("cls");
				break;
			case 6:
				soma = 0;
				cout << "\n\tDigite o numero da nota fiscal: ";
                cin >> NotasFiscais[cont].numero;
                getchar();
				cout << "\n\tDigite a data da nota fiscal: ";
				getline(cin, NotasFiscais[cont].data);
				for(int i = 0; i < qtd; i++){
					cout << "\n\tDigite a descricao do produto " << i + 1 << ": ";
					getline(cin, NotasFiscais[cont].itens[i].descricao);
					cout << "\n\tDigite a quantidade do produto " << i + 1<< ": ";
                    cin >> NotasFiscais[cont].itens[i].quantidade;
                    getchar();
					cout << "\n\tDigite o preco unitario do produto " << i + 1 << ": ";
                    cin >> NotasFiscais[cont].itens[i].precoUnitario;
					getchar();
                    NotasFiscais[cont].itens[i].subTotal = NotasFiscais[cont].itens[i].precoUnitario * NotasFiscais[cont].itens[i].quantidade;
					soma+= NotasFiscais[cont].itens[i].subTotal;
					system("cls");
				}
				NotasFiscais[cont].total = soma;
				cont++;
				break;
		}
    }while(res != 7);
    return 0;
}
