/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  for (int i = 0; i < 6; i++) {
    int x;
    cin >> x;
    sum += x;
  }

  double ans = sum / 6.0;
  printf("%.9f", ans);

  return 0;
}

