// Solved
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int fibonacci(int n){
    
    int* a=new int[n+2];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n+1;i++){
        a[i] = (a[i-1]+a[i-2])%mod;
    }
    return a[n+1];
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    cout<<fibonacci(n);
}