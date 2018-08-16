// Solved
#include <iostream>
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

		int n;
		cin>>n;

		int* a=new int[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		bool ans_hai = true;
		for(int i=n-1;i>=0;i--){

			if(a[i]-(i+1)>2){
				ans_hai=false;
			}else{
				for(int j=max(0,a[i]-2);j<i;j++){
					if(a[j]>a[i]){
						ans++;
					}
				}
			}
		}

		if(!ans_hai){
			cout<<"Too chaotic\n";
		}else{
			cout<<ans<<endl;
		}

	}

}