/*
	O cardápio de uma lanchonete é o seguinte:
	Sanduíche
	Código Descrição Preço
	Unitário
	100 Cachorro
	quente
	1,10
	101 Baurú simples 1,30
	102 Baurú com ovo 1,50
	103 Hamburger 1,10
	104 Cheesburger 1,30
	Bebida
	Código Descrição Preço
	Unitário
	105 Refrigerante 1,00
	106 Suco 2,00
	107 Nescau 1,50
	Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
	de cada um e calcule o valor a ser pago por aquele lanche
*/


#include <iostream>

using namespace std;

int main(){
	int qtdSanduiche = 0, qtdBebidas = 0, codigoSanduiche, codigoBebida, resSanduiche, resBebida;
	
	double valorSanduiche, valorBebida, totalCompras;
	
	bool temSanduiche = false, temBebida = false;
	
	string descricaoSanduiche, descricaoBebida;
	
	cout << "Digite o codigo do sanduiche: ";
	cin >> resSanduiche;
	if(resSanduiche > 99 && resSanduiche < 105){
		codigoSanduiche = resSanduiche;
		temSanduiche = true;
	}else{
		cout << endl << "Codigo do sanduiche não foi encontrado!";
	}
	cout << "Digite o codigo da bebida: ";
	cin >> resBebida;
	if(resBebida > 104 && resBebida < 108){
		temBebida = true;
		codigoBebida = resBebida;
	}else{
		cout << endl << "Codigo da bebida não foi encontrado!";
	}
	if(temSanduiche || temBebida){
		switch(codigoSanduiche){
			case 100:
				valorSanduiche = 1.10;
				descricaoSanduiche = "Cachorro quente";
				break;
			case 101:
				valorSanduiche = 1.30;
				descricaoSanduiche = "Bauru simples";
				break;
			case 102:
				valorSanduiche = 1.50;
				descricaoSanduiche ="Bauru com ovo";
				break;
			case 103:
				valorSanduiche = 1.10;
				descricaoSanduiche ="Hamburger";
				break;
			case 104:
				valorSanduiche = 1.30;
				descricaoSanduiche ="Cheesburger";
				break;
			default:
				valorSanduiche = 0;
				descricaoSanduiche = "Nenhum sanduiche informado!";
		}
		switch(codigoBebida){
			case 105:
				valorBebida = 1.0;
				descricaoBebida = "Refrigerante ";
				break;
			case 106:
				valorBebida = 2.0;
				descricaoBebida = "Suco ";
				break;
			case 107:
				valorBebida = 1.50;
				descricaoBebida = "Nescau";
				break;
			default:
				valorBebida = 0;
				descricaoBebida = "Nenhuma bebida informada!";
		}
		if(temBebida){
			cout << endl << "Quantidade de: " << descricaoBebida;
			cin >> qtdBebidas;
		}
		if(temSanduiche){
			cout << endl << "Quantidade de: " << descricaoSanduiche;
			cin >> qtdSanduiche;
		}
		totalCompras = (valorSanduiche * qtdSanduiche) + (valorBebida * qtdBebidas);
	}else {
		cout << endl << "Você não tem produtos a serem calculados";
	}
	if(totalCompras == 0){
		cout << endl << "Você não efetuou nenhuma compra!";
	}else {
		cout << endl << "O total da sua compra deu: " << totalCompras << "R$";
	}
	return 0;
}
