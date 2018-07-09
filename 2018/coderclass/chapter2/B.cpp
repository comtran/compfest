/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (!((a + b) > c && (a + c) > b && (b + c) > a))
    cout << "bukan ";

  cout << "segitiga" << endl;

  return 0;
}

