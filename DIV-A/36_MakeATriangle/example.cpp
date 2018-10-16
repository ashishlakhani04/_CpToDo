// Accepted
// Link: http://codeforces.com/contest/1064/problem/A
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

    int a,b,c;

    cin>>a>>b>>c;


    int sum = a+b+c;
    int minE = min(a,min(b,c));
    int maxE = max(a,max(b,c));
    int mid = sum - minE - maxE;

	if(minE+mid>maxE){
		cout<<0;
	}else{
		cout<<maxE-(mid+minE)+1;
	}
}