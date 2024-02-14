#include <bits/stdc++.h>

using namespace std;

int main() {

  unsigned long long a, b;
  int n;
  cin >> a >> b >> n;

  unsigned long long fibo;

  for (int i=2; i<n; i++) {
    fibo = (b * b) + a;
    a = b;
    b = fibo;
  }

  cout << fibo << endl;

  return 0;
}

/*
El algorimo está bien definido, el error se presenta por la limitante
de representación de números grandes de C++, sin embargo, en JAVA es posible
manipular estos números con la clase Biginteger
*/
