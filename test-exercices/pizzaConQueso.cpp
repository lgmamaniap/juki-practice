#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float findArea(int radio) {
  return (M_PI * radio * radio);
}

float findPercenteage(float cort, float total) {
  return (cort * 100 / total);
}

int main() {
  int r, c;
  cin >> r >> c;

  float resp = 0.0;
  if(r != c)
    resp = findPercenteage(findArea(r - c), findArea(r));

  cout << fixed << setprecision(8) << resp << endl;
  
  return 0;
}
