// Problem: Lucky Number
// Contest: CodeChef - SnackDown 2021 - Online Qualifiers
// URL: https://www.codechef.com/SNCKQL21/problems/LUCKYNUM
// Memory Limit: 256 MB
// Time Limit: 500 ms

//Keep calm and carry on..

#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define endl '\n'

void soln()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a == 7 || b == 7 || c == 7)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
}

int main()
{
  fast;
  int t = 1;
  cin >> t;
  while (t--)
  {
    soln();
    cout << endl;
  }
  return 0;
}
// Author: Gaurav Joshi