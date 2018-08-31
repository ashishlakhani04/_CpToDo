// https://www.geeksforgeeks.org/queries-gcd-numbers-array-except-elements-given-range/
// https://www.codechef.com/problems/GCDQ
// Solved
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
void fillPrefixSuffix(int* a,int n,int* prefix,int* suffix){

	prefix[1] = a[1]; 
	for(int i=2;i<=n;i++){
		prefix[i] = GCD(prefix[i-1],a[i]);
	}
	suffix[n] = a[n];
	for(int i=n-1;i>=1;i--){
		suffix[i] = GCD(suffix[i+1],a[i]);
	}
}
int GCDrange(int n,int l,int r,int* prefix,int* suffix){
	if(l == 1){
		return suffix[r+1];
	}
	if(r == n){
		return prefix[l-1];
	}
	return GCD(prefix[l-1],suffix[r+1]);
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){
    	int n,q;
    	cin>>n>>q;
    	int* a=new int[n+1];
    	for(int i=1;i<=n;i++){
    		cin>>a[i];
    	}
    	int* prefix = new int[n+1];
    	int* suffix = new int[n+1];
    	fillPrefixSuffix(a,n,prefix,suffix);
    	while(q--){
    		int l,r;
    		cin>>l>>r;
    		int ans = GCDrange(n,l,r,prefix,suffix);
    		cout<<ans<<"\n";
    	}
    }
    
}