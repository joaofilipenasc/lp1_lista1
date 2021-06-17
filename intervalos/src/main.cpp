#include <iostream>
#include <iomanip>

using namespace std;
using std::setprecision;

int main() {
  
  int x;
  //Intervalo [0;25]
  int intervalo1 = 0;
  //Intervalo [25;50]
  int intervalo2 = 0;
  //Intervalo [50;75]
  int intervalo3 = 0;
  //Intervalo [75;100]
  int intervalo4 = 0;

  while(cin >> std::ws >> x) {
    if(x >= 0 && x < 25) {
      intervalo1 += 1;
    }
    if(x >= 25 && x < 50) {
      intervalo2 += 1;
    }
    if(x >= 50 && x < 75) {
      intervalo3 += 1;
    }
    if(x >= 75 && x < 100) {
      intervalo4 += 1;
    }
  }

  cout << intervalo1 << endl;
  cout << intervalo2 << endl;
  cout << intervalo3 << endl;
  cout << intervalo4 << endl;

  return 0;
}