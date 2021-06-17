#include <iostream>
using namespace std;

int main() {

  int num, i, cont = 0;
  for (i = 0; i < 5; i++) {
    cin >> num;
    if (num < 0) {
      cont++;
    }
  }
  cout << cont;
  return 0;  
}