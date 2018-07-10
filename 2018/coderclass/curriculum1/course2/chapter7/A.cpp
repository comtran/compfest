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

  ll n, a, b;
  cin >> n >> a >> b;

  function<ll(ll, ll)> gcd = [&gcd](ll a, ll b) {
    if (b == 0) return a;

    return gcd(b, a % b);
  };

  function<ll(ll, ll)> lcm = [&gcd](ll a, ll b) {
    return (ll) a * b / gcd(a, b);
  };

  ll ans = (n / a) + (n / b) - (n / lcm(a, b));

  cout << ans << endl;

  return 0;
}

