/*
  Elabore um algoritmo que leia um vetor de 6 elementos inteiros representando o
  conjunto de números sorteados na mega sena. Leia, a seguir, para cada um dos N
  apostadores, um vetor contendo os 6 números da sua aposta. Verifique para cada
  apostador o seu número total de acertos na mega sena (para cada número
  correto, o apostador ganha 1 acerto) e escrever se ele “não ganhou”, “ganhou a
  quadra”, “ganhou a quina” ou “ganhou a mega”. O algoritmo deverá finalizar
  quando o usuário desejar.
*/

#include <iostream>
using namespace std;
int main() {
  int x, i, t = 0, res, cont = 1, vetorN[6], nAp, vetorAp[6], acertos = 0;
  bool flag = false;
  char letra;
  cout << "Digite o numero de apostadores: ";
  cin >> nAp;
  for (x = 0; x < 6; x++) {
    do {
      cout << "\nInforme o(s) numero(s) da mega-sena, na posição " << x << ": ";
      cin >> vetorN[x];
      if (x == 0) {
          i = 1;
      } else {
        for (int cont = 0; cont < x; cont++) {
          if (vetorN[x] == vetorN[cont]) {
            cout << "\nNumero ja existente, por favor degite outro!\n";
            i = 0;
            break;
          } else {
            i = 1;
          }
        }
      }
    } while (i == 0);
  }
  do{
    i = 0;
    do{
      cout << "\nJogador " << cont << " digite o valor da posição " << i <<": ";
      cin >> res;
      if(i != 0){
        for(x = 0; x <= i; x++){
            if(vetorAp[x] == res)
                flag = true;
        }
        if(flag){
          cout << "\nO sistema não aceita valores repitidos, por favor digite novamente!\n";
          flag = false;  
        }else{
            vetorAp[i] = res;
            i++;
        }  
      }else{
        vetorAp[i] = res;
        i++;
      }
    }while(i < 6);
    for(i = 0; i < 6; i++){
        for(x = 0; x <= i; x++){
          if(vetorAp[i] == vetorN[x]){
              acertos++; 
          }
        }
    }
    cout << "\n" << acertos;
    if(acertos <= 3){
      cout << "\nO jogador " << cont << " não ganhou!";
    }else{
      if(acertos == 4){
        cout << "\nO jogador " << cont << " acertou uma quadra!";
      }else{
        if(acertos == 5){
          cout << "\nO jogador " << cont << " acertou uma quina!";
        }else{
          if(acertos == 6)
          cout << "\nO jogador " << cont << " ganhou, deu MEGA!!";
        }
      }
    }
    cout << "\nDigite (s-sim ou n-não) se você deseja continuar: ";
    cin >> letra;
    if(letra == 'n'){
        flag = true;
    }
    cont++;
    acertos = 0;
  }while(flag == false && cont <= nAp);
  if(cont == nAp){
      cout << "\nNumero de apostadores acabou, não tem mais!";
  }
}
