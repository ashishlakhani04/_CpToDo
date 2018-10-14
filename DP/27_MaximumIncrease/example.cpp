// Solved
// Link: http://codeforces.com/problemset/problem/702/A
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);
    

    int n;
    cin>>n;

    int* a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int* dp = new int[n];
    int cnt=1;
    int i=0;
    while(i<n){
    	if(i == 0){
    		dp[i] = 1;
    	}else if(a[i]>a[i-1]){
    		dp[i] = ++cnt;
    	}else{
    		dp[i] = cnt;
    		cnt=1;
    	}
    	i++;
    }
    int maxE = INT_MIN;
    for(int i=0;i<n;i++){
    	maxE = max(maxE,dp[i]);
    }
    cout<<maxE;


}