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

	string s;
	cin>>s;
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}

	int a=0,d=0;

	a=m['A'];
	d=m['D'];

	if(a>d){
		cout<<"Anton";
	}else if(a == d){
		cout<<"Friendship";
	}else{
		cout<<"Danik";
	}


}