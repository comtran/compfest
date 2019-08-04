#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  int n, k;
  cin >> n >> k;

  int a[n * 2];
  for (int i = 0; i < (n * 2); i++) {
    cin >> a[i];
  }

  sort(a, a + (n * 2));

  bool valid = true;
  for (int i = 0; i < n; i += 2) {
    valid &= abs(a[i] - a[i + 1]) <= k;
  }

  cout << (valid ? "Ya" : "Tidak") << endl;

  return 0;
}
