#include<bits/stdc++.h>

using namespace std;


string buscarRespuesta(string texto) {
  if (texto.length() < 2) return "";

  string cadena = "";
  for (int i=0; i<texto.length() - 1; i++) {
    cadena = texto[i];
    cadena += texto[i + 1];
    if (cadena == "AC" || cadena == "WA" || cadena == "OK") return cadena;
  }

  return "";
}

int main() {

  int asd = 13;
  cout << asd % 5 << endl;
  string texto;
  while (getline(cin, texto))
  {
    string respuesta = buscarRespuesta(texto);
    if (respuesta.length() > 0) {
      cout << respuesta << endl;
      break;
    }
  }

  set<int> conj;
  int busqueda = conj.count(2);
  
  return 0;
}
