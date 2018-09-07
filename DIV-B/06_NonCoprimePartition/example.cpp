// http://codeforces.com/problemset/problem/1038/B
// Completed
#include <iostream>
#include <vector>
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
    if(n<=2){
    	cout<<"No";
    }else{
    	vector<int> odd,even;
    	for(int i=1;i<=n;i++){
    		if(i%2 == 0){
    			even.push_back(i);
    		}else{
    			odd.push_back(i);
    		}
    	}
    	cout<<"Yes\n";
    	cout<<even.size()<<" ";
    	for(int i=0;i<even.size();i++){
    		cout<<even[i]<<" ";
    	}
    	cout<<"\n";
    	cout<<odd.size()<<" ";
    	for(int i=0;i<odd.size();i++){
    		cout<<odd[i]<<" ";
    	}
    }
	

}