// Solved
// Link :- https://www.geeksforgeeks.org/wildcard-pattern-matching/
#include <iostream>
#include <queue>
#include <map>
#include <stack>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int n,m;
bool wildcardMatching(string text,string pattern){
	if(m == 0){
		return (n == 0);
	}

	bool dp[20][20];
	memset(dp,false,sizeof(dp));

	dp[0][0] = true;

	for(int j=1;j<=m;j++){
		if(pattern[j-1] == '*'){
			dp[0][j] = dp[0][j-1];
		}
	}	

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){

			if(pattern[j-1] == '*'){
				dp[i][j] = dp[i-1][j] || dp[i][j-1];
			}else if(pattern[j-1] == '?' || text[i-1] == pattern[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}else{
				dp[i][j] = false;
			}

		}
	}

	return dp[n][m];
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    string text,pattern;

    cin>>text>>pattern;

    n = text.length();
    m = pattern.length();

    bool sahi = wildcardMatching(text,pattern);

    if(sahi){
    	cout<<"true";
    }else{
    	cout<<"false";
    }
    return 0;

}