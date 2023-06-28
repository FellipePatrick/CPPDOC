#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

int main() {
  // Esperando 1 segundo
  int c = 1;
  while (c < 60) {
    system("clear");
    if (c < 10) {
      cout << "00:0" << c << endl;
    } else {
      cout << "00:" << c << endl;
    }
    this_thread::sleep_for(std::chrono::seconds(1));
    c++;
  }
    return 0;
  }

