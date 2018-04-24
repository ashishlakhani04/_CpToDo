#include <iostream>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	string s;
	cin>>s;
	int lc=0;
	int uc=0;
	for(int i=0;i<s.length();i++){
		if(islower(s[i])){
			lc++;
		}else{
			uc++;
		}
	}
	if(lc>=uc){
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
	}else{
		for(int i=0;i<s.length();i++){
			s[i]=toupper(s[i]);
		}
	}
	cout<<s;

}