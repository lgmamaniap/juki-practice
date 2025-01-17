// Cancion para mi amada
#include <iostream>

using namespace std;

bool validCmp(string mel, int com) {
  int zeros = 0;
  for (int i = 1; i < mel.size(); i += 2) {
    if (mel[i] == '0') zeros++;
    
    com -= mel[i] - '0';
  }
  com -= (zeros / 2);
  if (zeros % 2 != 0) com--;
  
  return com == 0;
}

int main()
{
  int t, n, err = 0;
  string mel;
  
  cin >> t >> n;
  
  while(cin >> mel) {
    cin >> mel;
    if (!validCmp(mel, n)) err++;
  }
  
  if (err < t)
    cout << "ve por ella tigre!" << endl;
  else
    cout << "circulando muchacho :(" << endl;
  
  return 0;
}
