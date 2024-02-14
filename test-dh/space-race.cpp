#include <bits/stdc++.h>

using namespace std;

set<int> procesados;

const int tamanioMaximo = 1010;
vector<vector<int>> calculoDivisores(1, vector<int>());

// Cálculo de divisores de posibles números de entrada
vector<int> hallarDivisores(int n)
{
  if (n == 1)
    return vector<int>(2, 1);
  vector<int> divisores(2, 1);
  for (int i = 2; i * 2 <= n; i++)
  {
    if (n % i == 0)
    {
      divisores.push_back(i);
    }
  }
  divisores.push_back(n);
  return divisores;
}

void conteoEstrellasNE(vector<int> conteoSS, int maximo)
{
  int respuesta = 0;
  vector<int> contadorEstrellas(maximo + 1, 0);
  for (int item : procesados)
  {
    int coincidencias = conteoSS[item];
    vector<int> estrellas = calculoDivisores[item];
    for (int i = 1; i < estrellas.size(); i++)
    {
      contadorEstrellas[estrellas[i]] += coincidencias;
    }
  }

  // Hallando resultado
  for (int i = 1; i < contadorEstrellas.size(); i++)
  {
    if (contadorEstrellas[i] - 1 > 0)
    {
      respuesta += contadorEstrellas[i] - 1;
    }
  }

  cout << respuesta << endl;
}

int main()
{
  for (int i = 1; i < tamanioMaximo; i++)
  {
    calculoDivisores.push_back(hallarDivisores(i));
  }

  int u;
  cin >> u;

  for (int j = 0; j < u; j++)
  {
    int maximo = 0;
    vector<int> conteoSS(tamanioMaximo, 0);
    procesados.clear();
    int ss;
    cin >> ss;

    for (int k = 0; k < ss; k++)
    {
      int ne;
      cin >> ne;
      conteoSS[ne]++;

      if (ne > maximo)
        maximo = ne;

      procesados.insert(ne);
    }
    conteoEstrellasNE(conteoSS, maximo);
  }

  return 0;
}

/*
1000: [1 2 4 5 8 10 20 25 40 50 100 125 200 250 500 1000 ]
500: [1 2 4 5 10 20 25 50 100 125 250 500 ]

504: [1 2 3 4 6 7 8 9 12 14 18 21 24 28 36 42 56 63 72 84 126 168 252 504 ]
252: [1 2 3 4 6 7 9 12 14 18 21 28 36 42 63 84 126 252 ]

2
4
13 27 12 26
3
2 2 2

*/