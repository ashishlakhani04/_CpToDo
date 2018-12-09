// Completed

#include <iostream>
#include <unordered_map>
#include <climits>
#include <iomanip>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
#define ld long double
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

	string t;
	getline(cin,t);
	int n = stoi(t);
	// cout<<n<<endl;
	while(n--){
		string ktemp;
		getline(cin,ktemp);
		int k = stoi(ktemp);
		// cout<<k<<endl;
		unordered_map<char,int> um;
		while(k--){
			char c;int temp;
			cin>>c>>temp;
			um[c]=temp;
		}
		int m;
		cin>>m;m++;
		ld sum=0;
		while(m--){
			string s;
			getline(cin,s);
			// cout<<s<<endl;
			for(int i=0;i<s.length();i++){
				sum += um[s[i]];
			}
			// cout<<sum<<endl;
		}
		cout<<fixed<<setprecision(2)<<sum/100<<"$\n";
	}
}