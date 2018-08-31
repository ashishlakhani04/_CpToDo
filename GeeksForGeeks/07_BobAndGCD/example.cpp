// https://www.geeksforgeeks.org/minimum-operations-make-gcd-array-multiple-k/
// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/bob-and-gcd-d6d86b3b/
// Solved
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){
    	int k,n;
	    cin>>k>>n;
	    int* a=new int[n];
	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    }

	    ll ans=0;
	    for(int i=0;i<n;i++){
	    	if(a[i]>k && a[i] != 1){
	    		int temp = a[i]%k;
	    		ans += min(temp,k-temp);
	    	}else{
	    		ans += k-a[i];
	    	}
	    	
	    }
	    cout<<ans<<"\n";
    }  
}