/*
  Implemente o jogo da velha usando uma matriz como tabuleiro
*/
#include <iostream>

using namespace std;

int main(){
  int  i, j, linha, coluna,cont = 0,  ax = 0;
  char jogo[3][3];
  bool v1, v2, v3, v4, v5, v6, v7, v8, flag = true;
  for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			jogo[i][j] = ' ';
		}
	}	
	do{
      cont++;
		  cout << "\n\n\tJOGO DA VELHA\n\n";
		  for(i = 0; i < 3; i++){
			    cout << "\t";
    			for(j = 0; j < 3; j++){
    				    cout <<" | "  << jogo[i][j];
    		  }
    		  cout << endl << endl;
	   }
	   cout << "\nInforme a posição que deseja jogar (linha e coluna): ";
	   cin >> linha >> coluna;
	   if(jogo[linha][coluna] != ' '){
        cout << "\nJogada Invalida, pois ja está preenchida, jogue novamente";
      }else{
        if(ax == 0){
            jogo[linha][coluna] = 'X';
            ax  = 1;
        }else{
            jogo[linha][coluna] = 'O';
            ax  = 0;
          }
          v1 = (jogo[0][0] != ' ' && jogo[0][0] == jogo[0][1] && jogo[0][1] == jogo[0][2]);
          v2 = (jogo[1][0] != ' ' && jogo[1][0] == jogo[1][1] && jogo[1][1] == jogo[1][2]);
          v3 = (jogo[2][0] != ' ' && jogo[2][0] == jogo[2][1] && jogo[2][1] == jogo[2][2]);
          v4 = (jogo[0][0] != ' ' && jogo[1][0] == jogo[0][0] && jogo[1][0] == jogo[2][0]);
          v5 = (jogo[0][1] != ' ' && jogo[1][1] == jogo[0][1] && jogo[1][1] == jogo[2][1]);
          v6 = (jogo[0][2] != ' ' && jogo[0][2] == jogo[1][2] && jogo[1][2] == jogo[2][2]);
          v7 = (jogo[0][0] != ' ' && jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]);
          v8 = (jogo[0][2] != ' ' && jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0]);
          if(v1 || v2 || v3 || v4 || v5 || v6 || v7 || v8 ){
              flag = false;
          }
          if(flag)
            system("cls");
        }
	}while(flag && cont <= 9);
  cout << "\n\n\tJOGO DA VELHA\n\n";
		for(i = 0; i < 3; i++){
			  cout << "\t";
    	  for(j = 0; j < 3; j++){
    			cout <<" | "  << jogo[i][j];
    	  }
        cout << endl << endl;
	}
  if(cont != 9){
      if(ax == 0){
        cout << "\nO jogador vencedor é o O!";
      }else{
        cout << "\nO jogador vencedor é o X!";
      }
  }else{
    cout << "\nO jogo deu velha!";
  }
  return 0;
}
