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
  ll n,k;
  cin>>n>>k;
  vector<ll> a;
  for(int i=0;i<n;i++){
      ll x;
      cin>>x;
      a.pb(x);
  }
  bool flag=false;
  ll cnt2=INT_MAX;
  for(int i=0;i<n;i++){
      if(a[i]>=k){
          flag=true;
          cnt2=min(cnt2,a[i]%k);
      }
  }
  if(flag==false){
      cout<<-1<<endl;
      return;
  }
  cout<<cnt2<<endl;
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