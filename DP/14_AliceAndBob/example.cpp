// Solved
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    ll n;
    cin>>n;

    ll* a=new ll[n];
    unordered_map<ll,ll> um;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	um[a[i]]++;
    }
    ll* dp=new ll[n+1];
    dp[0] = 0;
    dp[1] = um[1];
    for(int i=2;i<=n;i++){
    	dp[i] = max(dp[i-1],dp[i-2]+um[i]*i);
    }
    cout<<dp[n];
}