// Solved
// Link :- https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ 
#include <iostream>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);


    int n;
    cin>>n;

    int* a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int ans = INT_MIN;
    int temp = 0;
    for(int i=0;i<n;i++){
    	temp += a[i];
    	ans = max(ans,temp);
    	temp = max(0,temp);
    }
    cout<<ans;

}