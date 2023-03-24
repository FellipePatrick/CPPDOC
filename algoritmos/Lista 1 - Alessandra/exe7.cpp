/* 
	Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
	fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
	em Celsius
*/

#include <iostream>
using namespace std;

int main(){
	double grausCelsius, grausFahrenheit;
	cout << "Digite a temperatura em graus Celsius para a conversao: ";
	cin >> grausCelsius;
	grausFahrenheit = (9*grausCelsius+160)/5;
	cout << endl << "A conversao de " << grausCelsius << "° graus Celsius para fahrenheit e: " << grausFahrenheit << "°f";
	return 0;
}
