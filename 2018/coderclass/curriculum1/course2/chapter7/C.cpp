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

  int a, b;
  cin >> a >> b;

  function<int(int, int)> gcd = [&gcd](int a, int b) {
    if (b == 0) return a;

    return gcd(b, a % b);
  };

  function<ll(int, int)> lcm = [&gcd](int a, int b) {
    return (ll) a * b / gcd(a, b);
  };

  cout << lcm(a, b) << endl;

  return 0;
}

