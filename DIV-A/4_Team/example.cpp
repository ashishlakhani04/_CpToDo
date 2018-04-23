#include <iostream>
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

	int ans=0;
	for(int i=0;i<n;i++){
		int a,b,c,temp=0;
		cin>>a>>b>>c;
		if(a){
			temp++;
		}
		if(b){
			temp++;
		}
		if(c){
			temp++;
		}
		if(temp >=2){
			ans++;
		}
	}
	cout<<ans;

}