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

  deque<string> deque;

  function<void()> action[] = {
    [&deque]() {
      string s;
      cin >> s;
      deque.push_front(s);
    },
    [&deque]() {
      string s;
      cin >> s;
      deque.push_back(s);
    },
    [&deque]() {
      cout << deque.front() << endl;
      deque.pop_front();
    },
    [&deque]() {
      cout << deque.back() << endl;
      deque.pop_back();
    }
  };

  while (q--) {
    int t;
    cin >> t;

    action[--t]();
  }

  return 0;
}

