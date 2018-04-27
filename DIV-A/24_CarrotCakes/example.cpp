#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int n,t,k,d;

	cin>>n>>t>>k>>d;

	int cur=0;
	while(cur <= d){
		n -= k; 
		cur += t;
	}
	if(n>0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}