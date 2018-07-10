/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n);

  for (int i = 0; i < n; i++) {
    cout << a[i];
    if (i < n - 1) cout << ' ';
  } cout << endl;

  return 0;
}

