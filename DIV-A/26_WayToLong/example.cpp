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
		if(s.length()>10){
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
		}else{
			cout<<s<<"\n";
		}
	}

}