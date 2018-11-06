// Accepted
// Link - https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-savior-3/
#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
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
        int n;
        cin>>n;

        int* a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] != a[j] && (a[i]+a[j])%2 == 0){
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }

    
    return 0;

	
}