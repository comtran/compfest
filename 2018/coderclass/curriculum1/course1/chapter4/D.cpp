/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[j][i];
      if (j < n - 1) cout << ' ';
    } cout << endl;
  }

  return 0;
}

