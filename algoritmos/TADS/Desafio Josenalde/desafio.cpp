/*

O software precisa gerar numeros aleatorios e operadores aleatorios

*/

#include <ctime>
#include <iostream> // std::cout
#include <thread>   // std::thread
using namespace std;

void foo() { cout << "Ola\n"; }

time_t now = time(nullptr);
struct tm *timeinfo = localtime(&now);

int getSeconds(){ // get seconds of the system
  int seconds = timeinfo->tm_sec;
  return seconds;
}

void Validation(int value, int result){
  if (value == result) {
      cout << "\ncongratulation!";
    } else {
      cout << "\nYou dind't have a equals response, value correct " << value
           << "\nyou response: " << result;
    }
}

int getMinutes(){ // get minutes of the system
  int minutes = timeinfo->tm_min;
  return minutes;
}

void generateEquation() {
  int n1, n2, result, value;
  int hour = timeinfo->tm_hour;
  n1 = getMinutes() * getSeconds();
  n2 = getMinutes() * getSeconds() * (hour+1);
  int seconds = getSeconds();
  if(seconds > 9){
    seconds /= 10;
  }
  cout << endl << seconds;
  system("pause");
  switch (seconds) {
  case 0:
  case 1:
  case 2:
    value = n1 + n2;
    cout << n1 << " + " << n2 << ": ";
    cin >> result;
    Validation(value, result);
    break;
  case 3:
  case 4:
    value = n1 - n2;
    cout << n1 << " - " << n2 << ": ";
    cin >> result;
    Validation(value, result);
    break;
  case 5:
  case 6:
  case 7:
    value = n1 * n2;
    cout << n1 << " * " << n2 << ": ";
    cin >> result;
    Validation(value, result);
    break;
  case 8:
  case 9:
     if(n1 != 0){
      value = n1/n2;
      cout << n1 << " / " << n2 << ": ";
      cin >> result;
      Validation(value, result);
    }else{
      cout << "\nOperation invalid! Because Number One is zero!";
    }
    break;
  }
}
void generateOperator() { cout << "Generate matematics Operators"; }

int main() {
  generateEquation();
  //thread first(generateEquation());
  // thread second(time);
  //first.join();
  // second.join();
  return 0;
}