/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  function<int(int n)> t = [&t](int n) {
    if (n == 1) return 1;

    return 1 + t(ceil(n / 2.0)) + t(n / 2);
  };

  cout << t(n) << endl;

  return 0;
}

