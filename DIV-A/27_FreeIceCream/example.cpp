#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	ll n,x;
	cin>>n>>x;
	int dis=0;
	ll il=x;
	while(n--){

		char c;ll num;

		cin>>c;
		cin>>num;

		if(c == '+'){
			il += num;
		}else{
			if(num>il){
				dis++;
			}else{
				il -= num;
			}
		}

	}
	cout<<il<<" "<<dis;

}