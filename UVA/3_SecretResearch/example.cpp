#include <iostream>
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
		string s;
		cin>>s;

		int len = s.length();
		if(s == "1" || s == "4" || s == "78"){
			cout<<"+\n";
		}else if(s[len-1] == '5' && s[len-2] =='3'){
			cout<<"-\n";
		}else if(s[0] == '9' && s[len-1] == '4'){
			cout<<"*\n";
		}else if(s[0] == '1' && s[1] == '9' && s[2] == '0'){
			cout<<"?\n";
		}
	}

}