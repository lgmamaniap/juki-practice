#include <bits/stdc++.h>

using namespace std;

int main()
{
  int pobladores;
  int armas = 0;

  cin >> pobladores;

  for (int i = 0; i < pobladores; i++)
  {
    int vidaPoblador;
    cin >> vidaPoblador;

    if (vidaPoblador > 9)
    {
      armas++;
    }
  }

  cout << armas << endl;
  return 0;
}