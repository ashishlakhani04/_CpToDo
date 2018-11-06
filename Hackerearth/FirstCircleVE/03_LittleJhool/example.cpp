// Accepted
// Link - 
#include <iostream>
#include <string>
#include <cstring>
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

    if(s.find("000000")!=std::string::npos || s.find("111111")!=std::string::npos){
    	cout<<"Sorry, sorry!";
    }else{
    	cout<<"Good luck!";
    }
    return 0;

	
}