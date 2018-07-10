/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector<int> p;
  vector<bool> c (n, false);

  function<void()> permut = [&c, &p, &permut, n, k]() {
    if (p.size() == n) {
      int i = 0;
      while (i < n - 1 && abs(p[i] - p[i + 1]) <= k) i++;

      if (++i == n) {
        for (int i = 0; i < n; i++) {
          cout << p[i];
          if (i < n - 1) cout << ' ';
        } cout << endl;
      }
    }
    else {
      for (int i = 0; i < n; i++) {
        if (c[i]) continue;

        c[i] = true;
        p.push_back(i + 1);
        permut();
        c[i] = false;
        p.pop_back();
      }
    }
  };

  permut();

  return 0;
}

