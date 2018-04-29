#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<s.length();i++){

		if(s[i] == '1' || s[i] == '2' || s[i] == '3'){
			v.push_back(s[i]-'0');
		}

	}
	sort(v.begin(),v.end());
	int j=0;
	for(int i=0;i<s.length();i++){

		if(i%2 == 0){
			cout<<v[j];
			j++;
		}
		else{
			cout<<"+";
		}
	}

}