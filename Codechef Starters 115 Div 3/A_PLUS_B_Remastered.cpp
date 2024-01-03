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
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  vector<ll> c;
  for(int i=n-1;i>=0;i--){
    c.push_back(b[i]);
  }
  ll sum=a[0]+c[0];
  for(int i=0;i<n;i++){
    if(a[i]+c[i]!=sum){
        cout<<-1<<endl;
        return;
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<c[i]<<" ";
  }
  cout<<endl;
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