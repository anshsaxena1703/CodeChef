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
  for(int i=1;i<=k+1;i++){
      a.pb(i);
  }
  cout<<a[0]<<" ";
  for(int i=k+2;i<=n;i++){
      if(i%2==1){
          cout<<i<<" ";
      }
  }
  
  cout<<a[1]<<" ";
  for(int i=k+2;i<=n;i++){
      if(i%2==0){
          cout<<i<<" ";
      }
  }
  for(int i=2;i<a.size();i++){
      cout<<a[i]<<" ";
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