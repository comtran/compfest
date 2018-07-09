/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, y;
  long x;
  cin >> a >> b >> x >> y;

  while (!(x > y)) {
    cout << x << endl;
    x = (a * x) + b;
  }

  return 0;
}

