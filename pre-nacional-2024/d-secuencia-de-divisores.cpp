#include<iostream>

using namespace std;

int sumatorias[100005];

int calcularSumatoria(int item) {
  if (item == 1) {
    return 0;
  }
  int resultado = 1;
  for (int i = 2; i * i <= item; i++) {
    if (item % i == 0) {
      resultado += i;
      if (i * i  != item) { // Evita agregar el mismo divisor dos veces cuando i es la raíz cuadrada de n
        resultado += item / i;
      }
    }
  }
  return resultado;
}

void initializeNumbers(int n) {
  for (int i = 1; i<=n; i++) {
    sumatorias[i] = calcularSumatoria(i);
  }
}

int main() {
  initializeNumbers(100008);
  int n; 
  cin >> n;
  for (int i = 1; i<=n; i++) {
    int a;
    cin >> a;
    int sumatoria = sumatorias[a];

    bool perfecto = false;
    bool romantico = false;
    bool abundante = false;

    cout << a;

    // Es perfecto?
    if (sumatoria == a) {
      cout << " perfecto";
      perfecto = true;
    }

    // Es romantico?
    if (a != sumatoria && sumatorias[sumatoria] == a) {
      cout << " romantico";
      romantico = true;
    }

    // Es abundante?
    if (sumatoria > a) {
      cout << " abundante";
      abundante = true;
    }

    // Es complicado?
    if (!perfecto && !romantico && !abundante) {
      cout << " complicado";
    }

    cout << endl;
  }
  return 0;
}
