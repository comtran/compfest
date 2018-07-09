/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  int z = x;
  function<int()> teleport = [&]() {
    return ((a * z) + b) % c;
  };

  int step = 0;
  do {
    step++;
    z = teleport();
  } while (z != x);

  cout << step << endl;

  return 0;
}

