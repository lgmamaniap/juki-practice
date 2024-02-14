#include<bits/stdc++.h>

using namespace std;

void calcularCumplaneros(int periodo, int dhrs)
{
  vector<int> punteo(1000010, 0);
  int primerValor, ultimoValor;
  for (int i = 0; i < dhrs; i++)
  {
    int anio;
    cin >> anio;
    if (i == 0) {
      primerValor = anio;
    }
    punteo[anio - primerValor]++;
    ultimoValor = anio;
  }

  vector<int> edades(ultimoValor - primerValor + 1, ultimoValor);
  vector<int> nacimientos(ultimoValor - primerValor + 1, 0);

  int anioMenor = 1000010;
  int acumulado = 0;
  for (int i = 0; i < edades.size(); i++)
  {
    if (punteo[edades.size() - i - 1] != 0)
    {
      anioMenor = ultimoValor - i;
    }
    edades[edades.size() - i - 1] = anioMenor;

    if (i < periodo) {
      acumulado += punteo[i];
      nacimientos[i] = acumulado;
      continue;
    }

    acumulado += punteo[i] - punteo[i - periodo];
    nacimientos[i] = acumulado;
  }

  int mayor = 0;
  int edadMax = 0;
  int edadMin = 0;
  for (int i=periodo - 1; i<nacimientos.size(); i++) {
    if (mayor < nacimientos[i]) {
      mayor = nacimientos[i];
      edadMax = edades[i];
      edadMin = edades[i - (periodo - 1)];
    }
  }
  
  cout << mayor << " " << edadMin << " " << edadMax << endl;
}

int main()
{
  int periodo, dhrs;
  cin >> periodo >> dhrs;

  if (dhrs < 2)
  {
    int dhr;
    cin >> dhr;
    cout << dhrs << " " << dhr << " " << dhr << endl;
    return 0;
  }

  if (dhrs > 1)
  {
    calcularCumplaneros(periodo, dhrs);
  }

  return 0;
}

/*
5 20
1981 1982 1983 1986 1988 1992 1993 1993 1994 1996 1997 1998 1999 2000 2000 2001 2005 2006 2010 2011

*/
