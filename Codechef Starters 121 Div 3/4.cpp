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
bool is_prime(ll n) {
    int square_root = (ll)sqrt(n);
    for(ll i = 2; i <= square_root; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}
void solve(vector<ll> prime)
{
  ll n;
  cin>>n;
  
  if(n%2==0){
      for(int i=0;i<n/2;i++){
          cout<<prime[i]<<" "<<prime[i]<<" ";
      }
      cout<<endl;
  }
  else{
      cout<<1<<" ";
      for(int i=0;i<(n-1)/2;i++){
          cout<<prime[i]<<" "<<prime[i]<<" ";
      }
      cout<<endl;
  }
}
int32_t main()
{
  godspeed;
  int t = 1;
  vector<ll> prime;
  for(int i=2;i<=1e6;i++){
      if(is_prime(i)==true){
          prime.pb(i);
      }
  }
  cin >> t;
  while (t--)
  {
    solve(prime);
  }
  return 0;
}