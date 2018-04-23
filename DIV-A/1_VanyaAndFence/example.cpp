#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int n,h;
	cin>>n>>h;

	int sum=0;

	for(int i=0;i<n;i++){

		int temp;
		cin>>temp;

		if(temp>h){
			sum += 2;
		}else{
			sum += 1;
		}

	}
	cout<<sum;

}