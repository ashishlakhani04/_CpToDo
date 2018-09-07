// http://codeforces.com/problemset/problem/1037/A
// Completed
#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    
	int n;
    cin>>n;
    int k=1,z=0;
    while(true)
    {
        if(n>0) z++;
        else break;
        n-=k;
        k*=2;
    }
    cout<<z;
}