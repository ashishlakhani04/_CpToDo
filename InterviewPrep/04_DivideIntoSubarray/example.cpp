// Solved
// Link :- https://www.geeksforgeeks.org/divide-array-two-sub-arrays-averages-equal/
#include <iostream>
#include <queue>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

   	int n;
   	cin>>n;

   	int* a = new int[n];
   	int* prefix = new int[n];
   	int* suffix = new int[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   		if(i == 0){
   			prefix[i] = a[i];
   		}else{
   			prefix[i] = prefix[i-1]+a[i];
   		}
   	}
   	for(int i=n-1;i>=0;i--){
   		if(i == n-1){
   			suffix[n-i-1] = a[i];
   		}else{
   			suffix[n-i-1] = a[i]+suffix[n-i-2];
   		}
   	}

   	bool mila = false;
   	for(int i=0;i<n-1;i++){
   		if((prefix[i]/(i+1)) == (suffix[n-i-2]/(n-i-1))){
   			mila = true;
   			break;
   		}
   	}

   	cout<<mila;
}