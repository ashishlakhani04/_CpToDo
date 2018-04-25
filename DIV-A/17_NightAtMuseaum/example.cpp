#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int ans=0;

    string s;
    cin>>s;

    char c='a';
    for(int i=0;i<s.length();i++){

        char temp=s[i];
        int calc = abs(int(temp-c));

        if(calc>13){
            calc=26-calc;
        }
        ans += calc;
        c=s[i];

    }
    cout<<ans;

}