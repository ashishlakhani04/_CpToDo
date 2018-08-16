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



	int n,d;
	cin>>n>>d;

	int* a=new int[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=d;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<d;i++){
		cout<<a[i]<<" ";
	}
}