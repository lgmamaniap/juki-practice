#include<bits/stdc++.h>

using namespace std;

int main() {
  set<int> filas;
  set<int> columnas;

  int n, torres;
  cin >> n >> torres;

  for (int i=1; i<=n; i++) {
    filas.insert(i);
    columnas.insert(i);
  }

  for (int i=0; i<torres; i++) {
    int x, y;
    cin >> x >> y;
    if (filas.count(x)) {
      filas.erase(x);
    }

    if (columnas.count(y)) {
      columnas.erase(y);
    }

    long long resultado = filas.size() * columnas.size();

    cout << resultado << endl;
  }
  return 0;
}