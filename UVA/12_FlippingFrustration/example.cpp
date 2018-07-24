// Not Solved

#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int c;
	cin>>c;

	while(c--){

		int n,l,r,t;

		cin>>n>>l>>r>>t;

		int step = 0;
		bool milGya=false;

		int start=1;
		while(start<t){

			start += r;
			step++;
		}
		if(start == t){
			cout<<step<<"\n";
			continue;
		}

		if(start+r-l == t){
			step += 2;
			milGya=true;
		}


		if(!milGya){
			cout<<"uh-oh\n";
		}else{
			cout<<step<<"\n";
		}
	}

}