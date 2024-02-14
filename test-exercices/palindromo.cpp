#include <bits/stdc++.h>

using namespace std;

bool palindromo (string texto) {
  bool esPalindromo = true;
  for (int i=0; i * 2 < texto.length(); i++) {
    if (texto[i] != texto[texto.length() -1 - i]) {
      esPalindromo = false;
    }
  }
  return esPalindromo;
}

int main() {
  int cantidad;
  string texto;
  cin >> cantidad;

  for (int i=0; i<cantidad; i++) {
    cin >> texto;
    if (palindromo(texto)) {
      cout << "Palindroma" << endl;
    } else {
      cout << ":(" << endl;
    }

  }
  return 0;
}

/*
5
hola
radar
oruro
ok
oso

*/