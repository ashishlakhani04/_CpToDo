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

	map<int,int> m;

	for(int i=1;i<=n;i++){

		int temp;
		cin>>temp;

		m[temp] = i;
	}
	for(int i=1;i<=n;i++){
		cout<<m[i]<<" ";
	}

}