/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  function<void(int, string)> hanoi = [&hanoi](int n, string s) {
    if (n == 1) {
      printf("1 %c %c\n", s[0], s[1]);
      return;
    }

    hanoi(n - 1, (string) "" + s[0] + s[2] + s[1]);
    printf("%d %c %c\n", n, s[0], s[1]);
    hanoi(n - 1, (string) "" + s[2] + s[1] + s[0]);
  };

  hanoi(n, "ACB");

  return 0;
}

