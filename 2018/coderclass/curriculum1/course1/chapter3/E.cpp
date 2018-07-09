/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i < l || (i + l) >= n || j < l)
        cout << '*';
      else
        cout << '.';
    }

    cout << endl;
  }

  return 0;
}

