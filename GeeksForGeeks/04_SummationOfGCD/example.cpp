// https://www.geeksforgeeks.org/summation-gcd-pairs-n/
// 1. Naive Approach is to find all pairs and find their gcd and add them.
// 		Time Complexity: O(n^2*logn)
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
int findAns(int n){
	
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){

    	int n;
    	cin>>n;

    	int ans = findAns(n);
    	cout<<ans<<"\n";
    }
    
}