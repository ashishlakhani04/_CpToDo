#include <iostream>
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
    int* h=new int[n];
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i!=j) && (h[i] == a[j])){
                ans++;
            }
        }
    }
    cout<<ans;

}