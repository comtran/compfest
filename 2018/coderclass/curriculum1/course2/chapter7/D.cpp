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

  vector<int> prime;
  vector<bool> p (611954, true);

  function<void()> sieve = [&p, &prime]() {
    for (int i = 2; i * i <= 611954; i++) {
      if (p[i]) {
        for (int j = i * 2; j <= 611954; j += i) p[j] = false;
      }
    }

    for (int i = 2; i <= 611954; i++) {
      if (p[i]) prime.push_back(i);
    }
  };

  sieve();

  int m = 1;
  for (int i = 1; i <= n; i++) {
    cout << prime[m - 1] << endl;
    m = i * k + 1;
  }

  return 0;
}

