#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int getMonotone(int len){
	int dp[len][9];

	for(int i=0;i<9;i++){
		dp[0][i]=i+1;
	}
	for(int i=0;i<len;i++){
		dp[i][0]=1;
	}

	for(int i=1;i<len;i++){
		for(int j=1;j<9;j++){
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
	return dp[len-1][8];
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    cout<<getMonotone(n);
}