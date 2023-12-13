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
  ll n;
  cin>>n;
  vector<ll> a,b;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    b.pb(x);
  }
  vector<pair<ll,ll>> m;
  for(int i=0;i<n;i++){
    m.push_back({b[i],a[i]});
  }
  map<ll,ll> mp;
  for(int i=0;i<n;i++){
    mp[a[i]]=0;
  }
  ll ans=0;
  sort(m.begin(),m.end());
  for(int i=n-1;i>=0;i--){
    if(mp[m[i].second]==0 && m[i].first>=0){
        ans+=m[i].first;
        mp[m[i].second]=1;
    }
  }

  cout<<ans<<endl;
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