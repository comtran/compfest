/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  char opr;
  cin >> a >> opr >> b;

  map<char, function<int(int, int)>> map;
  map['+'] = [](int a, int b) { return a + b; };
  map['-'] = [](int a, int b) { return a - b; };
  map['*'] = [](int a, int b) { return a * b; };
  map['/'] = [](int a, int b) { return a / b; };
  map['%'] = [](int a, int b) { return a % b; };

  cout << map[opr](a, b) << endl;

  return 0;
}

