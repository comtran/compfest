/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    int i = 0, m = s.size() - 1;
    bool p = true;

    while (p && i < m) {
      if (s[i] != s[m]) p = false;
      i++; m--;
    }

    if (!p) cout << "bukan ";
    cout << "palindrom" << endl;
  }

  return 0;
}

