#include <iostream>

using namespace std;

long long base = 998244353;

int main() {
  long long n = 0LL;

  cin >> n;

  long long z = 0LL;

  if (n < 0) {
    z = base - ((-1 * n) % base);
  } else {
    z = (n) % base;
  }

  cout << z << endl;

  return 0;
}