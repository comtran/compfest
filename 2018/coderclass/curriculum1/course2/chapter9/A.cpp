/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q;
  cin >> q;

  queue<string> queue;

  while (q--) {
    int t;
    cin >> t;
    if (t < 2) {
      string s;
      cin >> s;
      queue.push(s);
    }
    else {
      cout << queue.front() << endl;
      queue.pop();
    }
  }

  return 0;
}

