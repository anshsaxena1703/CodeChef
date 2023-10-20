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
    int maxm=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxm=max(maxm,arr[i]);
    }
    vector<int> leftm(n),rightm(n);
    leftm[0]=arr[0];
    for(int i=1;i<n;i++){
        leftm[i]=max(leftm[i-1],arr[i-1]);
    }
    rightm[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightm[i]=max(arr[i],rightm[i+1]);
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=max(arr[i],min(leftm[i],rightm[i]));
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