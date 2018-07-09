#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, _;
  _ = scanf("%d", &t);

  while (t--) {
    int n, k;
    _ = scanf("%d%d", &n, &k);

    int s[(int) 1e6 + 1];
    for (int i = 0; i < n; i++) _ = scanf("%d", &s[i]);

    sort(s, s + n);
    int ans = 1e9;
    int w = n - k;

    for (int i = 0; i + w <= n; i++)
      ans = min(ans, s[i + w - 1] - s[i]);

    printf("%d\n", ans);
  }

  return 0;
}

