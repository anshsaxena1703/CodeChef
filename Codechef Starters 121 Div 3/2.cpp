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
  if(n==1){
      cout<<"YES"<<endl;
      return;
  }
  else if(n==2){
      if(a[0]>a[1]){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"Yes"<<endl;
      }
  }
  else if(n==3){
      vector<ll> b;
      b=a;
      sort(b.begin(),b.end());
      if(b[1]==a[1]){
          cout<<"YES"<<endl;
          return;
      }
      else{
          cout<<"NO"<<endl;
          return;
      }
  }
  else cout<<"YES"<<endl;
    
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