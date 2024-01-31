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
  ll n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  ll curr=1,ans=1;
  for(int i=1;i<n;i++){
      if(s[i]==s[i-1]){
          curr++;
          ans=max(ans,curr);
      }
      else{
          curr=1;
      }
  }
  cout<<ans<<" ";
  for(int i=n;i<(n+q);i++){
      char c;
      cin>>c;
      s+=c;
      if(s[i]==s[i-1]){
          curr++;
          ans=max(ans,curr);
      }
      else{
          curr=1;
      }
      cout<<ans<<" ";
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
