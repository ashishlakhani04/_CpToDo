#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int k,r;
    cin>>k>>r;

    int i;
    for(i=1;i<=10;i++){
        int temp=k*i;
        int temp2= temp-r;
        //cout<<temp<<" ";
        if(temp%10 == 0 || temp2%10 == 0){
            break;
        }

    }
    cout<<i;

}