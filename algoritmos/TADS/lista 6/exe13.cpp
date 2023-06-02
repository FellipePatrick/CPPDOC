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
    tProduto itens[2];
    float total;
};

void clear(){
    cout << "\n\n\t";
    system("pause");
    system("cls");
}
void cabecelhoP(string texto, int cont, int qtd){
    cout << "\n----------------------------------------------------------------------------\n";
	cout << "\t\t\t"<< texto <<"        Cadastrados: " << cont << "  A cadastrar: " << qtd - cont;
	cout << "\n----------------------------------------------------------------------------\n";
}

void cabecelho(string texto, int cod, string data){
    cout << "\n----------------------------------------------------------------------------\n";
	cout << "\t\t\t"<<texto <<"        Cod: " << cod << "\tdata: " << data;
	cout << "\n----------------------------------------------------------------------------\n";
}


int main(){
    int const qtd = 2;
    tNotaFiscal NotasFiscais[qtd];
    int res, cont = 0, aux, maior, primaryKey[qtd];
    bool flag = false;
    double soma = 0;
    string des;
    do{
        cabecelhoP("MENU PRINCIPAL", cont, qtd);
		cout << "\n\t1-Relatorio de notas Fiscais\n\n\t2-Buscar nota por numero\n\n\t3-Exibir nota com maior valor total";
		cout << "\n\n\t4-Exibir a quantidade total vendida de um produto pela descrição\n\n\t5-Exibir media total das notas\n\n\t6-Cadastrar Produto\n\n\t7-Sair: ";
		cin >> res;
		switch(res){
			case 1:
				if(cont != 0){
                    for(int x = 0; x < cont; x++){
                        cabecelho("NOTA FISCAL", NotasFiscais[x].numero, NotasFiscais[x].data);
                        cout << "\n\tNOME\t\tQUANTIDADE\tPRECO(U)\tTOTAL(P)\n";
                        for(int i = 0; i < qtd; i++){
                            cout << "\n\n\t" << NotasFiscais[x].itens[i].descricao << "\t\t" << NotasFiscais[x].itens[i].quantidade << "\t\t" << NotasFiscais[x].itens[i].precoUnitario << " R$";
                            cout << "\t\t" << NotasFiscais[x].itens[i].subTotal << " R$\n\n\t";  
                        }
                        cout << "\n\n\t\t\t\t\t\t\t\t"<< NotasFiscais[x].total << " R$\n";	
                        clear();
                    }
				}else{
					cout << "\n\tNenhum item cadastrado, cadastre!\n\n\t";
                    clear();
                }
				break;
			case 2:
                flag = false;
                cout << "\n\tDigite o numero da nota fiscal: ";
                cin >> res;
                for(int i = 0; i < cont; i++){
                    if(NotasFiscais[i].numero == res){
                        flag = true;
                        aux = i;
                    }
                }
                if(flag){
                    system("cls");
                    cabecelho("NOTA FISCAL", NotasFiscais[aux].numero, NotasFiscais[aux].data);
                    cout << "\n\tNOME\t\tQUANTIDADE\tPRECO(U)\tTOTAL(P)";
                    for(int i = 0; i < qtd; i++){
                            cout << "\n\n\t" << NotasFiscais[aux].itens[i].descricao << "\t\t" << NotasFiscais[aux].itens[i].quantidade << "\t\t" << NotasFiscais[aux].itens[i].precoUnitario << " R$";
                            cout << "\t\t    " << NotasFiscais[aux].itens[i].subTotal << " R$\n\n\t";  
                    }
                    cout << "\n\n\t\t\t\t\t\t\t\t"<< NotasFiscais[aux].total << " R$\n";		
                }else{
                    cout << "\n\tNota fiscal não encontrada!";
                }
                clear();
				break;
			case 3:
                //EXIBIR NOTA COM MAIOR VALOR TOTAL
                if(cont != 0){
                    maior = 0;
                    for(int i = 0; i < cont; i++){
                        if(NotasFiscais[i].total > maior){
                            maior = NotasFiscais[i].total;
                            aux = i; 
                        }
                    }
                        system("cls");
                        cabecelho("NOTA FISCAL", NotasFiscais[aux].numero, NotasFiscais[aux].data);
                        cout << "\n\tNOME\t\tQUANTIDADE\tPRECO(U)\tTOTAL(P)";
                        for(int i = 0; i < qtd; i++){
                                cout << "\n\n\t" << NotasFiscais[aux].itens[i].descricao << "\t\t" << NotasFiscais[aux].itens[i].quantidade << "\t\t" << NotasFiscais[aux].itens[i].precoUnitario << " R$";
                                cout << "\t\t" << NotasFiscais[aux].itens[i].subTotal << " R$\n\n\t";  
                        }
                        cout << "\n\n\t\t\t\t\t\t\t\t"<< NotasFiscais[aux].total << " R$\n";		
                        clear();
                }else{
                    cout << "\n\tNenhuma nota fiscal foi cadastrada";
                    clear();
                }
				break;
			case 4:
                aux = 0;
                flag = false;
                //EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRIÇÃO
                if(cont != 0){
                    cout << "\n\tDigite a descrição do produto para a verificação: ";
                    cin >> des;
                    for(int i = 0; i < cont; i++){
                        for(int x = 0; x < qtd; x++){
                            if(NotasFiscais[i].itens[x].descricao == des){
                                flag = true;
                            }
                        }
                    }
                    if(flag){
                        for(int i = 0; i < cont; i++){
                            for(int x = 0; x < qtd; x++){
                                if(NotasFiscais[i].itens[x].descricao == des){
                                    aux += (NotasFiscais[i].itens[x].subTotal);
                                }
                            }
                        }
                        cout << "\n\tO total de vendas do produto " << des << " é de: " << aux << " R$";
                    }else{
                        cout << "\n\tNenhum Produto foi encontrado com essa descrição!";
                    }
                }else{
                    cout << "\n\tNenhuma nota fiscal foi cadastrada";
                }
                clear();
				break;
			case 5:
                soma = 0;
                //EXIBIR MÉDIA DO TOTAL DAS NOTAS 
                if(cont != 0){
                    cabecelho("NOTAS FISCAIS", 0, "0000");
                    cout << endl;
                    for(int i = 0; i < cont; i++){
                        cout <<"\n\t" << NotasFiscais[i].numero << "\t" << NotasFiscais[i].data << "\t\t\t" << NotasFiscais[i].total;
                        soma += NotasFiscais[i].total;
                    }
                    cout << "\n\n\tTotal: " << soma/(cont+1);
                }else{
                    cout << "\n\tNenhuma nota fiscal foi cadastrada!";
                }
                clear();
				break;
			case 6:
                flag = false;
				if(cont <= qtd){
                    soma = 0;
                    do{
                        flag = false;
                        cout << "\n\tDigite o numero da nota fiscal: ";
                        cin >> res;
                        if(cont != 0 ){
                                for(int i = 0; i < cont; i++){
                                    if(primaryKey[i] == res){
                                        flag = true;
                                    }
                                }   
                        }
                        if(flag){
                            cout << "\n\tEsse numero de nota fiscal ja existe, digite outro!\n";
                        }
                    }while(flag);
                    primaryKey[cont] = res;
                    NotasFiscais[cont].numero = res;                    
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
                }else{
                    cout << "\n\t\tLimite de notas fiscais para serem cadastradas esgotado!";
                    clear();
                }
				break;
		}
    }while(res != 7);
    return 0;
}
