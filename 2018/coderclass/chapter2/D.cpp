/*!
 * @team KatingSeenakJidat
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int x = (int) s[0];

  if (s == "0")
    cout << "nol";
  else if (47 < x && x < 58)
    cout << "bilangan bulat positif";
  else if (s[0] == '-')
    cout << "bilangan bulat negatif";
  else
    cout << "kata";

  cout << endl;

  return 0;
}

