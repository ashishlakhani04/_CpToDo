// Solved
// Link: http://codeforces.com/problemset/problem/550/C
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);
    string s;
	int a,n;
    cin>>s; s="00"+s; n=s.size();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				a=(s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
				if(a%8==0){cout<<"YES"<<endl<<a; return 0;
				}
			}
		}
	}
	cout<<"NO";


}