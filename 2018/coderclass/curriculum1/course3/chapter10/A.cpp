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

  map<string, int> map;

  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    map[s] = i;
  }

  while (q--) {
    string x;
    cin >> x;
    if (map.count(x) > 0)
      cout << map[x];
    else
      cout << "-1";
    cout << endl;
  }

  return 0;
}

