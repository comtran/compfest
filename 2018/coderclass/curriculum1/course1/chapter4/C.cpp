/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int a[n];
  memset(a, 0, sizeof(a));
  while (k--) {
    int x;
    cin >> x;
    a[--x] = 1;
  }

  bool f = true;
  for (int i = 0; i < n; i++) {
    if (a[i] < 1) {
      if (!f) cout << ' ';
      if (f) f = false;
      cout << i + 1;
    }
  } cout << endl;

  return 0;
}

