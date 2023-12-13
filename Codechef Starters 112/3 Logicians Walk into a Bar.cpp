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
  string s;
  cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
        cout<<"NO"<<endl;
        for(int j=i+1;j<n;j++){
            cout<<"NO"<<endl;
        }
        break;
    }
    else if(s[i]=='1' && i!=n-1){
        cout<<"IDK"<<endl;
    }
    else if(s[i]=='1' && i==n-1){
        cout<<"YES"<<endl;
    }
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