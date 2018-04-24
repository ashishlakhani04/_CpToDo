#include <iostream>
#include <string.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    string s1,s2;

    cin>>s1;
    cin>>s2;

    for(int i=0;i<s1.length();i++){

    	s1[i] = toupper(s1[i]);
    	s2[i] = toupper(s2[i]);
    }
    if(s1 == s2){
    	cout<<0;
    }else if(s1 < s2){
    	cout<<-1;
    }else{
    	cout<<1;
    }
	

}