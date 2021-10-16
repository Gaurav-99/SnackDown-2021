// Problem: Test Match Series
// Contest: CodeChef - SnackDown 2021 - Online Qualifiers
// URL: https://www.codechef.com/SNCKQL21/problems/TESTSERIES
// Memory Limit: 256 MB
// Time Limit: 500 ms

//Keep calm and carry on..

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define pi 3.1415926535897932384626
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define F first
#define S second
#define loop1(i, a, b) for (ll i = a; i < b; i++)
#define loop2(i, a, b) for (ll i = b - 1; i >= a; i--)
#define endl '\n'

typedef vector<int> vi;

void soln()
{
  vi res(5);

  for (auto &itr : res)
  {
    cin >> itr;
  }

  int ind = count(all(res), 1);
  int eng = count(all(res), 2);

  if (ind == eng)
  {
    cout << "DRAW";
  }
  else if (ind > eng)
  {
    cout << "INDIA";
  }
  else
  {
    cout << "ENGLAND";
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