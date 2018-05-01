#include <iostream>
#include <math.h>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
ll min(ll a,ll b){
	if(a<b){
		return a;
	}
	return b;
}
ll max(ll a,ll b){
	if(a>b){
		return a;
	}
	return b;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int n;
	cin>>n;

	vector<ll> v;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	for(int i=0;i<n;i++){

		if(i == 0){

			cout<<abs(v[0]-v[1])<<" ";
			cout<<abs(v[0]-v[n-1])<<"\n";

		}else if(i == n-1){

			cout<<abs(v[n-1]-v[n-2])<<" ";
			cout<<abs(v[n-1]-v[0])<<"\n";

		}else{

			cout<<min(abs(v[i-1]-v[i]),abs(v[i]-v[i+1]))<<" ";
			cout<<max(abs(v[0]-v[i]),abs(v[i]-v[n-1]))<<"\n";

		}

	}

}