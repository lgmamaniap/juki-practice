#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
  stack<int> st;
  queue<int> qu;
  priority_queue<int> pqu;

  int isST = 1, isQU = 1, isPQU = 1;

  int n, operation, value;
  cin >> n;

  while (n-- > 0) {
    cin >> operation >> value;
    if(operation == 1) {
      st.push(value);
      qu.push(value);
      pqu.push(value);
      continue;
    }

    if (!st.empty()) {
      if (st.top() != value) isST = 0;
      else st.pop();
    } else isST = 0;

    if (!qu.empty()) {
      if (qu.front() != value) isQU = 0;
      else qu.pop();
    } else isQU = 0;

    if (!pqu.empty()) {
      if (pqu.top() != value) isPQU = 0;
      else pqu.pop();
    } else isPQU = 0;
  }

  string resp = "";

  if(isST + isQU + isPQU == 0)
    resp = "imposible";
  
  if (isST) resp = "pila";
  if (isQU) resp = "cola";
  if (isPQU) resp = "cola de prioridad";

  if(isST + isQU + isPQU > 1)
    resp = "indefinido";

  cout << resp << endl;
  return 0;
}
