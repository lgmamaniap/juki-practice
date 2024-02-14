#include <bits/stdc++.h>

using namespace std;

int main() {
  double base, altura;
  const int inputPrecision = 6;
  cin >> base;
  cin >> altura;

  double area = (base * altura) / 2;

  cout << fixed << setprecision(inputPrecision) << area << endl;
  return 0;
}