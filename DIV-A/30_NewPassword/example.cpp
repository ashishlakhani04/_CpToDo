#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int n,k;

    cin>>n>>k;

    // cout<<(char)('a'+2);
    int j=0;
    for(int i=0;i<n;i++){
    	if(j>=k){
    		j = 0;
    		cout<<(char)('a'+ j);
    		j++;
    		continue;
    	}
    	cout<<(char)('a'+ j);
    	j++;
    }
	

}