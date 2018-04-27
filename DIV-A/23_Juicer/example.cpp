#include <iostream>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int n,b,d;
    cin>>n>>b>>d;

    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=0;
    ll waste=0;
    for(int i=0;i<n;i++){
        if(a[i]>b){
            continue;
        }
        waste += a[i];
        if(waste > d){
            ans++;
            waste=0;
        }

    }
    cout<<ans;
    

}