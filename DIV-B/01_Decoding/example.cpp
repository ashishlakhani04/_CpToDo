#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
ll fact(ll n){
	ll ans=1;
	for(int i=1;i<=n;i++){
		ans = (ans *i)%mod;
	}
	return ans % mod;
}
ll combo(ll n,ll r){
	return (fact(n)/(fact(n-r)*fact(r))%mod)%mod;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;

    	int* a=new int[n];
    	int ans = k;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		ans = (ans ^ a[i]);
    	}
    	cout<<max(ans,0)<<"\n";
    }
}