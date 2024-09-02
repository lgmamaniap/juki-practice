#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i=0; i<t; i++) {
    long long n;
    cin >> n;

    long long m = n >> 1;
    long long result = m * (m + 1);

    if ((n & 1) != 0) {
      result += (m + 1);
    }

    cout << result << endl;
  }
  return 0;
}