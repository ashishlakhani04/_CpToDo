// Solved
// Link-https://www.hackerrank.com/challenges/max-array-sum/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming
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

	dp[0] = a[0];
	if(n == 1){
		cout<<a[0];
		return 0;
	}
	for(int i=1;i<n;i++){
		if(i == 1){
			dp[i] = max(a[1],dp[0]);
		}else{
			dp[i] = max(a[i]+dp[i-2],max(a[i],dp[i-1]));
		}
	}
	cout<<dp[n-1];
	return 0;
}