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
        int n;
	    cin>>n;
        
	   vector<int>arr(n);
	    long long int prefix=0;
	    for(int i = 0;i < n;i++){
	        cin>>arr[i];  
	    }
	    vector<int>ans;
	    vector<bool>checked(n,true);
	    sort(arr.begin(),arr.end());
	    ans.push_back(arr[0]);
	    prefix+=arr[0];
	    for(int i = 1; i < n;i++){
	        if(arr[i]>prefix){
	            prefix+=arr[i];
	            ans.push_back(arr[i]);
	            checked[i]=false;
	        }
	    }

	    int ans1=n-ans.size();
	    for(int i=1;i<n;i++){
	        if(checked[i])ans.push_back(arr[i]);
	    }
	    cout<<ans1<<endl;
	    for(auto x:ans){
	        cout<<x<<" ";
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