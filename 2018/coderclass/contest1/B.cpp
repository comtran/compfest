#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef unsigned long long ull;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ull a, b;
  cin >> a >> b;

  function<ull(ull)> f = [](ull x) {
    ull res[] = {x, 1, x + 1, 0};
    return res[x % 4];
  };

  string bits = bitset<64>(f(b) ^ f(a - 1)).to_string();
  int i = 0, n = bits.size();
  while (i < n - 1 && bits[i] == '0') i++;

  string ans = bits.substr(i);
  cout << ans << endl;

  return 0;
}

