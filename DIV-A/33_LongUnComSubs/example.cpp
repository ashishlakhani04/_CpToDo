#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    string s1,s2;

    cin>>s1>>s2;

    if(s1 == s2){
    	cout<<-1;
    }
    else{
    	cout<<max(s1.length(),s2.length());
    }

}