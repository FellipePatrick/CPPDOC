/*
Elabore um algoritmo que mostre o calend�rio de um determinado m�s. Os dados de entrada s�o o m�s
(cujos dados devem ser mostrados) e o dia da semana em que esse m�s inicia. Assuma que esse m�s est�
em um ano que n�o � bissexto, por�m considere meses de 28, 30 e 31. O resultado deve ser como
mostrado abaixo. Ex: janeiro, come�ando na 5a feira:
*/

#include <iostream>

using namespace std;

int main(){
  int mes, dia, cont = 1, contS=1;
  bool res = true;
  cout << "Digite o m�s( 1 a 12): ";
  cin >> mes;
  cout << endl << "Digite o dia da semana (1 para domingo a 7 no sabado): ";
  cin >> dia;
  switch(mes){
    case 1:
      mes = 31;
      break;
    case 2:
      mes = 28;
      break;
    case 3:
      mes = 31;
      break;
    case 4:
      mes = 30;
      break;
    case 5:
      mes = 31;
      break;
    case 6:
      mes = 30;
      break;
    case 7:
      mes = 31;
      break;
    case 8:
      mes = 31;
      break;
    case 9:
      mes = 30;
      break;
    case 10:
      mes = 31;
      break;
    case 11:
      mes = 30;
      break;
    case 12:
      mes = 31;
      break;
    default:
      mes = 0;
  }
  cout << endl << endl << "Dom  Seg  Ter  Qua  Qui  Sex  Sab" << endl;
  while(res == true){
      if( mes > 0){
	      	if( cont == 1){ // descobre o dia que vai a contar
	          for(int i = 1; i < dia; i++){
	            cout << "     ";
	            contS ++;
	          }
	          for(int i = contS; i <= 7 ; i++){
	            cout << cont << "    ";
	            cont++;
	          }
	      }else{
	          for(int i = 1; i <= 7; i++){
	              if(cont < 10){
	                cout << cont << "    ";
	                cont++;
	              }else{
	                if(cont <= mes){
	                    cout << cont << "   ";
	                    cont++;
	                }else{
	                  res = false;
	                }
	              }
	          }
	      }
	   	 cout << endl;
	  }else{
	  	cout << endl << "Mes invalido!";
	  	res = false;
	  }
  }  
  return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
