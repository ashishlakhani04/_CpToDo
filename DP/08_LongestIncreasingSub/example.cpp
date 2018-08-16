#include <iostream>
#include <climits>
#include <iomanip>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int bottomUp(int* a,int n){

	int dp[100];
	// memset()
	
	for(int i=0;i<n;i++){
		dp[i] = 1;
	}
	int best = -1;

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){

			if(a[j] <= a[i]){
				int cur_len = 1 + dp[j];
				dp[i] = max(cur_len,dp[i]);
			}

		}
		best = max(best,dp[i]);
	}

	return best;


}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

	int n;
	cin>>n;
	int* a=new int[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<bottomUp(a,n);

	return 0;
}