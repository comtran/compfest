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

  int ans = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++)
      if (a[i] > a[j]) ans++;
  }

  cout << ans << endl;

  return 0;
}

