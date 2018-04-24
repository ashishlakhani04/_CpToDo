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

    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n-1;i++){
    	if(i == 0){
    		if(s[i] == s[i+1]){
    			cnt++;
    		}
    	}else{
    		if(s[i] == s[i+1]){
    			cnt++;
    		}
    	}
    }
    cout<<cnt;

}