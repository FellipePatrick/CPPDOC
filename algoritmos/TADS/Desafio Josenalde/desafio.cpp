/*
 Conversor binário fracionário, representando a notação mantissa expoente IEEE 754, ou seja, digitar um número decimal fracionário e exibir a representação mantissa-expoente.
 Permitir o usuário escolher se quer FLOAT (precisão simples) ou DOUBLE (precisão dupla). 
 ||| Neste mesmo sistema, permitir também usuário digitar um número binário fracionário e exibir o decimal fracionário equivalente (o que a calculadora do windows não faz)
*/

#include <iostream>
#include <cmath>
using namespace std;
void padraoIEEE(int *v, int numero, double n, char letra);
int tamanhoN(int numero);
void printMenu();
double erro(int *v, char letra, bool flag);
int main(){
  int op;
  char es;
  double numero;
  do{
    printMenu();
    cin >> op;
    switch (op)
    {
    case 1:
      cout << "\n\tDigite o numero que deseja converter: ";
      cin >> numero;
      cout << "\n\tDigite a precisao (f-float ou d-double): ";
      cin >> es;
      switch (es)
      {
      case 'f':
        int n; // define o sinal
        if(numero >= 0){
          n = 0;
        }else{
          numero *= (-1);
          n = 1;
        }
        int vetorFloat[32];
        vetorFloat[0] = n;
        padraoIEEE(vetorFloat, numero, numero, es);
        cout << "\n\n\tNumero: "<< erro(vetorFloat, es, true);
        break;
      case 'd':
        int d;
        if(numero >= 0){
          d = 0;
        }else{
          numero *= (-1);
          d = 1;
        }
        int vetorDouble[64];
        vetorDouble[0] = d;
        padraoIEEE(vetorDouble, numero, numero, es);
        cout << "\n\n\tNumero: "<< erro(vetorDouble, es, true);
        break;
      }
      break;
    case 2:
      cout << "\n\tDigite a precisao (f-float ou d-double): ";
      cin >> es;
      switch (es)
      {
        case 'f':
          int vetor[32];
          for(int i = 0; i < 32; i++){
            cout << "\t";
            cin >> vetor[i];
          }
          cout << "\n\n\tNumero: " << erro(vetor, 'f', false);
          break;
        case 'd':
          int vetorD[64];
          for(int i = 0; i < 64; i++){
            cout << "\t";
            cin >> vetorD[i];
          }
          cout << "\n\n\tNumero: " << erro(vetorD, 'd', false);
          break;
        default:
          cout << "\n\tOpcao invalida!";

      }
      break;
    case 3:
      cout << "\n\tFim do Programa!";
      break;
    default:
      cout << "\n\tNumero Invalido!";
      break;
    }
    cout << "\n\n\t";
    system("pause");
    system("cls");
  }while(op != 3);
  return 0;  
}
int tamanhoN(int numero){
  int t = 0;
  bool flag = true;
  do{
    if(numero >= pow(2,t)){
      t++;
    }else{
      flag = false;
    }
  }while(flag);
  return t;
}
void printMenu(){
  cout << "---------------------------------------------------\n";
  cout << "\t\tCALCULADORA DEC - BIN\n"; 
  cout << "---------------------------------------------------\n";
  cout << "\n\t1-Converter dec para bin\n\n\t2-Converter bin para dec\n\n\t3-Sair\n\n\t: ";
}
void padraoIEEE(int *v, int numero, double n, char letra){
    int aux, tamanhoFinalE, tamanhoM, tamanhoFinalM, expo;
    if(letra == 'd'){
        tamanhoM = 12;
        tamanhoFinalE = 12;
        tamanhoFinalM = 62;
        expo = 1023;
    }else{
      if(letra == 'f'){
        tamanhoM = 9;
        tamanhoFinalE = 9;
        tamanhoFinalM = 32;
        expo = 127;
      }
    }
    cout << "\n\t";
    aux = (tamanhoN(numero) - 1);
    int e =  aux + expo;
    aux = tamanhoM-2;
    cout << "|" << v[0] << "|";
    for(int i = 1; i < tamanhoFinalE; i++){
      if(e >= pow(2, aux)){
        v[i] = 1;
        e = e - pow(2, aux);
      }else{
        v[i] = 0;
      }
      aux--;
      cout << v[i] << " ";
    }
    cout << "|";
    double ref = n - numero;
    aux = tamanhoFinalE;
    for(int i = (tamanhoN(numero) - 1); i >= 0; i--){ // escreve o expoente
      if(numero >= pow(2,i)){
        v[aux] = 1;
        numero -= pow(2, i);
      }else{
        v[aux] = 0;
      }
      if(aux != tamanhoFinalE){
        cout << v[aux] << " ";
      }
      aux++;
    }
  for(int i = aux; i < tamanhoFinalM; i++){ // escreve a mantissa
      ref *= 2;
      if(ref >= 1){
        v[i] = 1;
        ref = ref - 1;
      }else{
        v[i] = 0;
      }
      cout << v[i] << " ";
    }
    cout << "|";
}
double erro(int *v, char letra, bool flag){
  double erro, mantissa = 0;
  int s, e = 0, i, aux, tamanhoE, tamanhoFinalE, tamanhoM, tamanhoFinalM, expo;
  s = v[0];
  if(letra == 'd'){
      tamanhoM = 12;
      tamanhoFinalE = 12;
      tamanhoFinalM = 62;
      expo = 1023;

  }else{
    if(letra == 'f'){
      tamanhoM = 9;
      tamanhoFinalE = 9;
      tamanhoFinalM = 32;
      expo = 127;
    }
  }
  //pega o tamanho do expoente
  tamanhoE = tamanhoFinalE - 2;
  for(i = 1; i < tamanhoFinalE; i++){
    if(v[i] == 1){
       e += pow(2, tamanhoE);
    }
    tamanhoE--;
  }
  e = e - expo;
  aux = 1;
  // calculando valores da mantissa
  if(flag){
    tamanhoM+=1;
  }
  for(i = tamanhoM; i < tamanhoFinalM; i++){
    if(v[i] == 1){
      mantissa = mantissa + (1/(pow(2,aux)));
    }
    aux++;
  }
  mantissa+=1;
  erro = (pow(-1,s)*1*mantissa*(pow(2,(e))));
  return erro;
}