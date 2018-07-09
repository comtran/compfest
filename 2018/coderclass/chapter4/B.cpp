/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int b[n];
  int j = 0, m = n - 1;
  for (int i = 0; i < n; i++) {
    if (i % 2) {
      b[i] = a[m];
      m--;
    }
    else {
      b[i] = a[j];
      j++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << b[i];
    if (i < n - 1) cout << ' ';
  } cout << endl;

  return 0;
}

