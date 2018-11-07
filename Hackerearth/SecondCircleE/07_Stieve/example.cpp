// Accepted
// Link - https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/stevie/description/
#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
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

    int* a=new int[n+1];
    int* b=new int[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    map <int,int> val;
    for (int i = 1; i <= n; ++i)
    {
        val[a[i]] = max(b[i], val[a[i]]);
    }
    for(int i=1;i<=n;i++){
        cout<<val[a[i]]<<" ";
    }
    
    return 0;

	
}