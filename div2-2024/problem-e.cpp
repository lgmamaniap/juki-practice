#include<iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    int c, e;
    cin >> c;
    cin >> e;

    if (c * 2 >= e) {
      cout << "SI" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}