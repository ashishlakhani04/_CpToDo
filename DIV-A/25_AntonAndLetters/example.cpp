#include <iostream>
#include <set>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	string s;
	// cin>>s;
	char c;
	cin>>c;
	while(c != '}'){
		s.push_back(c);
		cin>>c;
	}

	set<char> st;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			st.insert(s[i]);
		}
	}
	cout<<st.size();
}