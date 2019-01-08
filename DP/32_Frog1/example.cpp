// Solved
// Link: https://atcoder.jp/contests/dp/tasks/dp_a
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
    
	int n;
	cin>>n;

	int* a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(n == 2){
		cout<<abs(a[1]-a[0]);
		return 0;
	}
	int* dp=new int[n];
	for(int i=0;i<n;i++){
		dp[i] = 0;
	}
	int ans = 0;
	dp[0] = 0;
	dp[1] = abs(a[1]-a[0]);
	for(int i=2;i<n;i++){
		dp[i] = min(dp[i-2]+abs(a[i]-a[i-2]),dp[i-1]+abs(a[i]-a[i-1]));
	}
	cout<<dp[n-1];

}