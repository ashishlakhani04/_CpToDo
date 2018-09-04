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
double calculateAns(int n,double p){
	double* dp = new double[n+1];
	dp[0] = 0.0;
	dp[1] = 0.0;
	dp[2] = p;
	dp[3] = 1.0 - p;

	for(int i=4;i<=n;i++){
		dp[i] += p*dp[i-2] + (1-p)*dp[i-3];
	}
	return dp[n];
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int n;
    double p;
    cin>>n>>p;

    cout<<calculateAns(n,p);
    
}