#include <iostream>
using namespace std;

int main(){
	int total, segundos, minutos, horas;
	cout << "Informe o tempo total em segundos:\n ";
	cin >> total;
	horas = total/3600;
	minutos =(total%3600)/60;
	segundos = ((total%3600)/60)/60;
	cout << horas << ":hrs " << minutos << ":min " << segundos << ":sec";
}
