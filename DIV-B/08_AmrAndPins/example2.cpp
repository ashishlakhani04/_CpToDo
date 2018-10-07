#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n,x;
    cin>>n>>x;

    map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int ans=0;
    for(int i=0;i<=x;i++){
        if(i == x){
            // ans += max(0,m[x]-1);
            if(m[x] >= 1){
                ans += m[x];
            }
        }else if(m[i]){

        }
        else{
            ans++;
        }
    }  
    cout<<ans;

}