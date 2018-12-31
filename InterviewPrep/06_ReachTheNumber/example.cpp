// Solved
// Link :- https://www.geeksforgeeks.org/reach-the-numbers-by-making-jumps-of-two-given-lengths/
#include <iostream>
#include <queue>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
void reachTheNums(int nums[], int k, int d1, int d2, int n) 
{ 
    int i, ans[n] = { 0 }; 
    int gcd = __gcd(d1, d2); 
  
    for (i = 0; i < n; i++) { 
        int x = nums[i] - k; 
  
        // If distance x is coverable 
        if (x % gcd == 0) 
            ans[i] = 1; 
        else
            ans[i] = 0; 
    } 
  
    for (i = 0; i < n; i++) 
        cout << ans[i] << " "; 
} 
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int nums[] = { 9, 4 }; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    // Starting number K 
    int k = 8; 
  
    // Sizes of jumps d1 and d2 
    int d1 = 3, d2 = 2; 
  
    reachTheNums(nums, k, d1, d2, n); 
  
    return 0; 

}