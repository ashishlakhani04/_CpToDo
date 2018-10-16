// Solved
// Link: http://codeforces.com/contest/1060/problem/A
#include <iostream>
#include <vector>
#include <map>
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

    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
    	if(s[i] == '8'){
    		cnt++;
    	}
    }
    cout<<min(cnt,n/11);
}