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

  function<void()> sort = [&]() {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
          swap(a[i], a[j]);
          cout << (i + 1) << ' ' << (j + 1) << endl;
        }
      }
    }
  };

  sort();

  return 0;
}

