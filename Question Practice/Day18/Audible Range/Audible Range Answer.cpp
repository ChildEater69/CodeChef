#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--)
  {
    int rt;
    cin >> rt;
    if(rt >= 67 && rt <= 45000) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
  return 0;
}