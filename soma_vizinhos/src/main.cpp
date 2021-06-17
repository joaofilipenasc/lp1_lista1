#include <iostream>
using namespace std;

int main() {
  int m, n, i, soma = 0;
  cin >> m;
  cin >> n;

  if (n > 0) {
    for (i = m; i <= n; i++) {
      soma += i;
    }
    cout << soma;
  }
  else {
    for (i = n; i <= m; i++) {
      soma += i;
    }
    cout << soma;
  }  
}