// Solved
// Link: https://atcoder.jp/contests/dp/tasks/dp_c
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
class Node{
public:
	int a,b,c;
};
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    
    int n;
	cin>>n;
    Node* arr = new Node[n];
	
    for(int i=0;i<n;i++){
    	int a,b,c;
    	cin>>a>>b>>c;
    	arr[i].a = a;
    	arr[i].b = b;
    	arr[i].c = c;
    }

    Node* dp = new Node[n];
    dp[0].a = arr[0].a;
    dp[0].b = arr[0].b;
    dp[0].c = arr[0].c;

    for(int i=1;i<n;i++){

    	dp[i].a = arr[i].a + max(dp[i-1].b,dp[i-1].c);
    	dp[i].b = arr[i].b + max(dp[i-1].a,dp[i-1].c);
    	dp[i].c = arr[i].c + max(dp[i-1].a,dp[i-1].b); 	
    	
    }
    

    cout<<max(dp[n-1].a,max(dp[n-1].b,dp[n-1].c));
}