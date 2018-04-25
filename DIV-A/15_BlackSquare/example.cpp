#include <iostream>
#include <map>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int a,b,c,d;
    cin>>a>>b>>c>>d;

    map<char,int> m;
    m['1']=a,m['2']=b,m['3']=c,m['4']=d;

    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.length();i++){
        ans += m[s[i]];
    }
    cout<<ans;

}