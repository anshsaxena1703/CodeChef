/*                         ..............Code by Ansh..............                                       */
#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<queue>
#define ll long long
const int MOD = 1e9 + 7;
const int w = 998244353;
#define pb push_back
#define endl "\n"
#define godspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second < p2.second;
}
void solve()
{
        ll n, x;
        cin >> n >> x;

        if (n == 1 && x == 0) {
            cout << 1 << endl;
            continue;
        }

        ll alice = 2;
        ll remaining = n - 1;

        if (x != 0 && (x == n || x == n - 1)) {
            cout << -1 << endl;
        } else if (x == 0) {
            for (int j = 1; j <= n; ++j) {
                cout << j << " ";
            }
            cout << endl;
        } else {
            vector<ll> sequence;
            for (ll j = 1; j <= n; ++j) {
                if (j != n) {
                    sequence.push_back(j);
                }
            }
            sequence.insert(sequence.begin() + max(0, n - x - 2), n);
            for (auto j : sequence) {
                cout << j << " ";
            }
            cout << endl;
        }
}
int32_t main()
{
  godspeed;
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}