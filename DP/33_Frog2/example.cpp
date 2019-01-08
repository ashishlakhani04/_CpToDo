// Solved
// Link: https://atcoder.jp/contests/dp/tasks/dp_b
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <stdio.h>
#include <map>
#include <stack>
#include <algorithm>
#include <unordered_map>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    
	int n,k;
	cin>>n>>k;

	int* a=new int[n];
	int* dp=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		dp[i] = 0;
	}

	for(int i=0;i<n;i++){
		int ans = INT_MAX;

		for(int j=i-k;j<i;j++){
			if(j>=0){
				ans = min(ans,dp[j]+abs(a[i]-a[j]));
			}
		}
		if(i == 0){
			dp[i] = 0;
		}else{
			dp[i] = ans;
		}
		
	}
	// for(int i=0;i<n;i++){
	// 	cout<<dp[i]<<" ";
	// }

	cout<<dp[n-1];

}