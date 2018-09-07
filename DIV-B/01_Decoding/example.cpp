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
	string s;
	cin>>s;

	vector<char> v;


	if((n&1) != 0){
		for(int i=0;i<n;i++){
			if((i&1) == 0){
				v.push_back(s[i]);
			}else{
				v.insert(v.begin(),s[i]);
			}
		}
	}else{
		for(int i=0;i<n;i++){
			if((i&1) == 0){
				v.insert(v.begin(),s[i]);	
			}else{
				v.push_back(s[i]);
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<v[i];
	}

}