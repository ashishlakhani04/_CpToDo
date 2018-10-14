// Solved
// Link: http://codeforces.com/problemset/problem/363/B
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
    

    int n,k;
    cin>>n>>k;

    int* a=new int[n+1];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    }
    int tsum=0;
    int sum=0;
    int ans=1;
    for(int i=1;i<=n;i++){
    	if(i<=k){
    		sum += a[i];
    		tsum += a[i];
    	}
    	else{
    		sum += a[i];
    		sum -= a[i-k];

    		if(tsum>sum){
    			ans = i-k+1;
    			tsum=sum;
    		}
    	}
    }
    cout<<ans;

}