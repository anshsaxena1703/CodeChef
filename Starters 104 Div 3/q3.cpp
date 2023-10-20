/*                         ..............Code by Ansh..............                                       */
#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<queue>
#include<algorithm>
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

ll lcm(ll m, ll n) {
    return (m*n)/(__gcd(m,n));
}


void solve()
{
  ll x,y,k;
  cin>>x>>y>>k;
  for(int i=0;i<k;i++)
  {
    if(x>y)
    {
        x=__gcd(x,y);
        if(x>y){
            x=lcm(x,y);
        }
        else{
            y=lcm(x,y);
        }
        if(x==y){
            break;
        }
    }
    else{
        y=__gcd(x,y);
        if(x>y){
            x=lcm(x,y);
        }
        else{
            y=lcm(x,y);
        }
        if(x==y){
            break;
        }
    }
  }
  cout<<x+y<<endl;
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
