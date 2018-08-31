// https://www.geeksforgeeks.org/eulers-totient-function/
// Euler’s Totient function ?(n) for an input n is count of numbers
// n {1, 2, 3, …, n} that are relatively prime to n, i.e., the numbers 
// whose GCD (Greatest Common Divisor) with n is 1.
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
int phi(int n){
	int result = n;

	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			while(n%i == 0){
				n /= i;
			}
			result -= (result/i);
		}
		
	}
	if (n > 1)
        result -= (result/n);
	return result;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    cout<<phi(n);
    
}