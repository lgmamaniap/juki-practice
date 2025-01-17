// Digital Harbor space race
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<vector<int>> v(1005);

void calculateDiv(int n) {
  for (int i = 1; i * i <= n; i++) {
    if (n%i == 0) {
      v[n].push_back(i);
      if (i != n / i) v[n].push_back(n / i);
    }
  }
}

void generateDivs() {
  for (int i = 1; i < 1001; i++)
    calculateDiv(i);
}

int main()
{
  generateDivs();
  int u, n, s;
  cin >> u;
  
  while(u--) {
    cin >> n;
    unordered_map<int, int> m;
    int res = 0;
    
    while (n--) {
      cin >> s;
      for (int i : v[s]) {
        m[i]++;
        if (m[i] > 1) res++;
      }
    }

    cout << res << endl;
  }
  return 0;
}
