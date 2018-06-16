// Incomlete
#include <iostream>
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

	int* a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	if(n == 1){
		cout<<1;
	}else{

		if(a[1]>=a[0]){

			int ans=0;
			int temp=1;
			int check=0;

			for(int i=1;i<n-1;i++){
				if(a[i+1]>=a[i] && check == 0){
					temp++;
				}else if((a[i+1]<a[i]) && (check == 0 || check == 1)){
					temp++;
					check=1;
				}else if(a[i+1]>=a[i] && check == 1){

					ans = max(ans,temp);
					temp=1;
					check=0;
				}

			}
			ans = max(ans,temp);

			cout<<ans+1;

		}else{
			// cout<<"hello";

			int ans=0;
			int temp=1;
			int check=0;

			int i=1;

			for(;i<n-1;i++){
				if(a[i+1]<a[i]){
					temp++;
				}else{
					break;
				}
			}
			ans = max(ans,temp);
			temp=1;
			i--;
			for(;i<n-1;i++){
				if(a[i+1]>=a[i] && check == 0){
					temp++;
				}else if((a[i+1]<a[i]) && (check == 0 || check == 1)){
					temp++;
					check=1;
				}else if(a[i+1]>=a[i] && check == 1){

					ans = max(ans,temp);
					temp=1;
					check=0;
				}

			}
			ans = max(ans,temp);

			cout<<ans+1;

		}


	}


}