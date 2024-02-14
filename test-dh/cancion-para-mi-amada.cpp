#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &cadena, char delimitador)
{
  vector<string> partes;
  istringstream ss(cadena);
  string parte;

  while (getline(ss, parte, delimitador))
  {
    partes.push_back(parte);
  }

  return partes;
}

double contadorCompas(string texto)
{
  double conteo = 0;

  for (int i = 1; i < texto.length(); i += 2)
  {
    string caracter(1, texto[i]);
    double numero = strtod(caracter.c_str(), nullptr);
    if (numero > 0)
    {
      conteo += numero;
    }
    else
    {
      conteo += 0.5;
    }
  }

  return conteo;
}

int main()
{
  int tolerancia, tiempoCompas;
  cin >> tolerancia;
  cin >> tiempoCompas;

  string cadenaMelodias = "";
  getline(cin, cadenaMelodias);
  getline(cin, cadenaMelodias);

  vector<string> melodias = split(cadenaMelodias, ' ');
  int errores = 0;
  bool aceptable = true;

  for (int i = 0; i < melodias.size(); i++)
  {
    double compasMelodia = contadorCompas(melodias[i]);
    if (tiempoCompas != compasMelodia)
    {
      errores++;
    }
    if (errores > tolerancia)
    {
      aceptable = false;
      break;
    }
  }

  if (aceptable)
  {
    cout << "¡ve por ella tigre!" << endl;
  }
  else
  {
    cout << "circulando muchacho :(" << endl;
  }

  return 0;
}

/*

2
3
A1G1C1 B2G0G0 A1G1D1

0
4
G2A1A1 D0G2F2

*/
