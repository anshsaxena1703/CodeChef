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
ll f(char c1,char c2){
    ll ans=0;
    while(c1!=c2){
        c1+=3;
        if(c1>90){
            c1-=26;
        }
        ans++;
    }
    return ans;
}
void solve()
{
  ll n;
  cin>>n;
  string s1,s2;
  cin>>s1>>s2;
  vector<ll> vis(n);
  for(int i=0;i<s1.size();i++){
      vis[i]=f(s1[i],s2[i]);
  }
  for(int i=0;i<n;i++){
      cout<<vis[i]<<" ";
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