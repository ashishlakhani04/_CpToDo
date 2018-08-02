#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int bottomUp(string s1,string s2){

	int dp[100][100];

	int n = s1.length();
	int m = s2.length();

	// make empty s2 (insertion)
	dp[0][0] = 0;
	for(int i=1;i<=m;i++){
		dp[0][i] = dp[0][i-1]+1;
		// cout<<dp[0][i]<<endl;
	}
	// make word empty (deletion)
	for(int i=1;i<=n;i++){
		dp[i][0] = dp[i-1][0]+1;
	}

	// make dp table
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int q1 = dp[i-1][j-1];
			int q2 = dp[i-1][j];
			int q3 = dp[i][j-1];

			dp[i][j] = min(q1,min(q2,q3)) + (s1[i-1] != s2[j-1]);
		}
	}
	return dp[n][m];
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	string s1,s2;
	cin>>s1>>s2;
	cout<<bottomUp(s1,s2);
}