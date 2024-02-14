// #include<bits/stdc++.h>

// using namespace std;

// queue<long long> equipo;
// multiset<long long> agrupador;

// int main() {
//   int n, j;
//   cin >> n >> j;

//   int selector = 0;

//   if (j % 2 == 0) {
//     selector = 1;
//   }

//   for (int i=0; i<n; i++) {
//     long long hi;
//     cin >> hi;

//     if (j == 1) {
//       cout << hi << endl;
//       continue;
//     }

//     if (i < j - 1) {
//       equipo.push(hi);
//       agrupador.insert(hi);
//       continue;
//     }
//     equipo.push(hi);
//     agrupador.insert(hi);

//     int contador = 0;
//     int posicionRespuesta = (agrupador.size() / 2) -selector;
//     for (auto it=agrupador.begin(); it!=agrupador.end(); ++it) {
//       if (posicionRespuesta == contador) {
//         cout << *it << endl;
//         break;
//       }
//       contador++;
//     }

//     long long elementoEliminar = equipo.front();
//     equipo.pop();
//     auto it = agrupador.find(elementoEliminar);
//     agrupador.erase(it);
//   }
//   return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main() {
  long long n, j;
  cin >> n >> j;

  long long tam2 = j / 2;
  long long tam1 = j - tam2;

  for (int i=0; i<n; i++) {
    long long hi;
    cin >> hi;

    if (j == 1) {
      cout << hi << endl;
      continue;
    }

    

  }

  return 0;
}

/*
9
3
8
1
9
7
6
4
1
2
2


9
6
13
4
10
12
19
8
2
11
5

*/