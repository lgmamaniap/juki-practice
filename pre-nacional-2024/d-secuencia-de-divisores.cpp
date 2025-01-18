#include<iostream>

using namespace std;

int calculateSum(int item) {
  if (item < 2) return 0;
    
  int resultado = 1;
  for (int i = 2; i * i <= item; i++) {
    if (item % i == 0) {
      resultado += i;
      if (i * i  != item) {
        resultado += item / i;
      }
    }
  }
  return resultado;
}

int main() {
  int n; 
  cin >> n;
  while(n--) {
    int a;
    cin >> a;
    
    int sumatoria = calculateSum(a);

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
    if (a != sumatoria && calculateSum(sumatoria) == a) {
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
