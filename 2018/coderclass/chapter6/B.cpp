/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  function<int(int, int)> maze = [&](int x, int y) {
    if (x == n && y == m) return 1;

    int c = 0;
    if (x + 1 <= n) c += maze(x + 1, y);
    if (y + 1 <= m) c += maze(x, y + 1);

    return c;
  };

  cout << maze(1, 1) << endl;

  return 0;
}

