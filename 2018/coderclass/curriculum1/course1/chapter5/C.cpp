/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  int i = 0, m = s.size() - 1;
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    --x; --y;

    if (t < 2) {
      char tmp = s[x];
      s[x] = s[y];
      s[y] = tmp;
    }
    else {
      string tmp = "";
      for (int i = x; i <= y; i++) tmp = s[i] + tmp;
      for (int i = 0; i <= (y - x); i++) s[x + i] = tmp[i];
    }
  }

  cout << s << endl;

  return 0;
}

