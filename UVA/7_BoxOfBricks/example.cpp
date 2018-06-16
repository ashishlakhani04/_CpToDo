// Completed
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



	int n;
	int count=1;
	while(1){
		cin>>n;
		if(n){
			int* a=new int[n];
			ll sum=0;
			for(int i=0;i<n;i++){
				cin>>a[i];
				sum += a[i];
			}
			int make = sum/n;
			ll ans=0;
			for(int i=0;i<n;i++){
				if(a[i]-make >0){
					ans += a[i]-make;
				}
			}
			cout<<"Set #"<<count++<<"\n";
			cout<<"The minimum number of moves is "<<ans<<".\n";
			cout<<"\n";
		}else{
			break;
		}
		
	}

}