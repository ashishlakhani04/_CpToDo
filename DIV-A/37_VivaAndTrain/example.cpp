// Solved
// Link: http://codeforces.com/contest/1066/problem/A
#include <iostream>
#include <vector>
#include <map>
#include <math.h>
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
    	int len,div,l,r;
    	cin>>len>>div>>l>>r;

    	
    	int ans = floor(len/div)-floor(r/div)+floor((l-1)/div);
    	cout<<ans<<"\n";
    }
   
}