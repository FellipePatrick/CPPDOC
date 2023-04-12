/*
  elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o algoritmo deve ler o seu código, o valor
  unitário e a quantidade adquirida. Após as informações do produto, o algoritmo deve mostrar o subtotal da compra e perguntar se o       
  usuário deseja continuar (S-sim, N-não). Caso o usuário escolha 'S', o algoritmo deverá pedir os dados do próximo produto. Caso         
  escolha 'N', o algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos. Em seguida deve ler o valor     
  pago e informar se está correto, existe troco ou está insuficiente.
*/

#include <iostream>
using namespace std;
int main(){
  int codigoP, cont = 1, quantidade, qtdTotal;
  float valorUni, subTotal = 0, dinheiro;
  char res;
  do{
    cout << "\nInforme o codigo do Produto, valor unitario e a quantidade:\n";
    cin >> codigoP >> valorUni >> quantidade;
    for(int i = 1; i <= quantidade; i++){
        subTotal += (quantidade * valorUni);
    }
    qtdTotal = quantidade;
    cout << "\nDeseja continuar (S-sim, N-não)";
    cin >> res;
  }while(res == 'S');
  cout << "\nO valor pago a se pago na quantidade de itens " << qtdTotal << " é: " << subTotal << " R$";
  cout << "\nInforme o seu dinheiro: ";
  cin >> dinheiro;
  if(dinheiro < subTotal){
      cout << "\nVocê está devendo: " << subTotal - dinheiro << subTotal << " R$";
      return 0;
  }else if(dinheiro > subTotal){
      cout << "\nVocê tem o troco de: " << dinheiro - subTotal << subTotal << " R$";
      return 0;
  }
  cout << "\nVocê deu o dinheiro na continha exata!";
  return 0;
}
