#include<bits/stdc++.h>

using namespace std;

int main() {
  set<string> nombres;
  map<string, int> refrigerios;
  int n;
  cin >> n;
  int llamadasAtencion = 0;

  for (int i=1; i<=n; i++) {
    string competidor;
    cin >> competidor;
    if (refrigerios.find(competidor) != refrigerios.end()) {
      refrigerios[competidor] = refrigerios[competidor] + 1;
    } else {
      refrigerios[competidor] = 1;
    }
  
    if (refrigerios[competidor] - (i - refrigerios[competidor]) > 1) {
      llamadasAtencion++;
    }
  }

  cout << llamadasAtencion << endl;
  return 0;
}