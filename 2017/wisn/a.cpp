#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int t, _;
  _ = scanf("%d", &t);

  while (t--) {
    int n, m;
    _ = scanf("%d%d", &n, &m);

    ll ans = 0;
    for (int i = 0; i < n * m; i++) {
      ll x;
      _ = scanf("%lld", &x);
      ans += x;
    }

    printf("%lld\n", ans);
  }

  return 0;
}

