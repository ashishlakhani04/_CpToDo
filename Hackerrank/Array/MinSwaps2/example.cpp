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



	int n;
	cin>>n;

	int* a=new int[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans=0;
	for(int i=0;i<n;i++){
		if(a[i] == i+1){
			continue;
		}
		ans++;
		swap(a[i],a[a[i]-1]);
		i--;
	}
	cout<<ans;

}