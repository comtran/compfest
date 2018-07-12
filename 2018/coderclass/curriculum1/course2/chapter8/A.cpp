/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n);

  while (q--) {
    int x;
    cin >> x;
    cout << a[--x] << endl;
  }

  return 0;
}

