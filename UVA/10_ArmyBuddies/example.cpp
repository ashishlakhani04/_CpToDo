// Completed
#include <iostream>
#include <unordered_map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int s,b;

	
	while((cin>>s>>b) && (s != 0) && (b != 0)){

		// corner case: output *
		// O(b*s)
		int* left=new int[s+1];
		int* right = new int[s+1];
		for(int i=1;i<=s;i++){
			left[i]=i-1;
			right[i]=i+1;
		}

		left[1]=-1;
		right[s]=-1;

		while(b--){

			int l,r;
			cin>>l>>r;

			left[right[r]] = left[l];
			if(left[l] != -1){
				cout<<left[l];
			}else{
				cout<<"*";
			}

			cout<<" ";

			right[left[l]] = right[r];
			if(right[r] != -1){
				cout<<right[r];
			}else{
				cout<<"*";
			}
			cout<<"\n";
		}
		cout<<"-\n";


	}

}