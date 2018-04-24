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
    int cnt=1;
    int i=0;
    bool check;
    while(n--){
    	string s;
    	cin>>s;


    	if(i == 0){
    		if(s[1] == '0'){
    			check=false;
    		}else{
    			check=true;
    		}
    	}
    	else{
    		if(s[0] == '0'){
    			if(!check){
    				cnt++;
    			}
    			if(s[1] == '0'){
    				check=false;
    			}else{
    				check=true;
    			}
    			
    		}else{
    			if(check){
    				cnt++;
    			}
    			if(s[1] == '0'){
    				check=false;
    			}else{
    				check=true;
    			}
    		}
    	}


    	i++;
    }
	cout<<cnt;

}