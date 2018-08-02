// Codeforces : http://codeforces.com/problemset/problem/580/A
// ToDo
#include <iostream>
#include <climits>
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

	int* dp=new int[n];
	// int cnt=1;
	dp[0] = 1;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			dp[i] = dp[i-1] + 1;
		}else{
			dp[i] = 1;
		}
	}
	int maxE = INT_MIN;
	for(int i=0;i<n;i++){
		maxE = max(maxE,dp[i]);
	}
	cout<<maxE;

	return 0;
}