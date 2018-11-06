// Accepted
// Link - https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
#include <iostream>
#include <string>
#include <cstring>
#include <set>
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
        int n,x;
        cin>>n>>x;
        set<int> s;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            s.insert(a);
        }
        if(s.size() == x){
            cout<<"Good";
        }else if(s.size()>x){
            cout<<"Average";
        }else{
            cout<<"Bad";
        }
        cout<<"\n";
    }
    return 0;

	
}