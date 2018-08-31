// https://www.geeksforgeeks.org/largest-subarray-gcd-one/
// https://www.codechef.com/problems/SUBGCD
// 1. Naive Approach is to find all subarrays and keep track of the 
// 		largest subarray with GCD 1
// 		Time Complexity: O(n^2*n*logn)
// 2. An efficient solution is based on fact that if any two elements have GCD equals to one, then whole array 
// 		has GCD one. So the output is either -1 or length of array.
// Solved - ash_lak
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
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

	while(t--){
		int n;
		cin>>n;

		int* a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=-1;
		int gcd=a[0];
		for(int i=1;i<n;i++){
			gcd = GCD(gcd,a[i]);
			if(gcd == 1){
				ans = n;
				break;
			}
		}
		cout<<ans<<"\n";
	}
}