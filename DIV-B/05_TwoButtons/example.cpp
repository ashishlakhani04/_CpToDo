// Accepted

#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int n,m;
	cin>>n>>m;

	if(n >= m){
		cout<<n-m;
	}else {
		
		int cnt=0;

		while(true){
			if(m<=n){
				break;
			}
			if(m%2 == 0){
				cnt++;
				m /= 2;
			}else{
				m++;
				cnt++;
			}
		}

		cout<<abs(m-n)+cnt;

	}

}