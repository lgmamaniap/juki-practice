// cumplañeros
#include <iostream>
#include <vector>

using namespace std;

void searchDHRS(vector<int>& y, vector<int>&dhr, int period) {
  pair<int, pair<int, int>> resp;
  resp.first = 0;
  
  int i = 1, j = 2;
  
  while(j < y.size()) {
    while(y[j] - y[i] != period && j < y.size()) {
      if (y[j] - y[i] < period) j++;
      else i++;
    }
    
    if (j >= y.size()) break;
    /*
    cout << "periods: "
      << y[j]
      << " : "
      << y[i]
      << " -> "
      << dhr[j] - dhr[i - 1]
      << endl;
      */
    
    int cump = dhr[j] - dhr[i - 1];
    if (cump > resp.first) {
      resp.first = cump;
      resp.second.first = y[i];
      resp.second.second = y[j];
    }
    i++;
  }
  
  cout << resp.first
    << " "
    << resp.second.first
    << " "
    << resp.second.second;
}

int main() {
  vector<int> years, acc;
  years.push_back(0);
  acc.push_back(0);
  
  int per, dhrs, dh;

  cin >> per >> dhrs;
  
  while(dhrs--) {
      cin >> dh;
      if (years.back() == dh)
        acc[acc.size() - 1]++;
      else {
        years.push_back(dh);
        acc.push_back(acc.back() + 1);
      }
  }
  
  searchDHRS(years, acc, per - 1);

  return 0;
}
