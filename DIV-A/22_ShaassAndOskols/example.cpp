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

    int* a=new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x == 1){
            // int left=y-1;
            int right=a[x]-y;
            a[x] = 0;
            a[x+1] += right;
        }else if(x == n){
            int left=y-1;
            int right=a[x]-y;
            a[x-1] +=left;
            a[x] = 0;
            // a[x+1] += right;
        }else{
            int left=y-1;
            int right=a[x]-y;
            a[x-1] +=left;
            a[x] = 0;
            a[x+1] += right;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }

}