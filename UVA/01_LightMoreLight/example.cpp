#include <iostream>
#include <math.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	ll x;
	while(cin>>x && x != 0){

		// only perfect square numbers have odd number of divisiors
		// other including prime number have even number of divisors 
		
		ll check = sqrt(x);
		if(check * check == x){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
		
	}

	return(0);

}