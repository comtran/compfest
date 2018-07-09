/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  function<int(int)> g = [](int n) {
    int i = 1, c = 0;
    while (i <= sqrt(n)) {
      if (!(n % i)) {
        c++;
        if (i != (n / i)) c++;
      }

      i++;
    }

    return c;
  };

  function<int(int)> h = [&g, &h](int n) {
    if (n < 1) return 0;
    return g(n) + h(n - 1);
  };

  cout << h(n) << endl;

  return 0;
}

