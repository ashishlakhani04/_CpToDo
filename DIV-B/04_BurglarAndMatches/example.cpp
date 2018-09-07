#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
bool myCompare(pair<int,int> p1,pair<int,int> p2){
	return p1.second>p2.second;
}
int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);



	ll n;
	int m;
	cin>>n>>m;

	vector<pair<int,int> > v;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}

	sort(v.begin(),v.end(),myCompare);
	//for(int i=0;i<m;i++){
	//	cout<<v[i].first<<" "<<v[i].second<<endl;
	//}
	ll ans=0;
	ll temp=0;
	for(int i=0;i<m;i++){
		if(temp+v[i].first<n){
			ans += v[i].second*v[i].first;
			temp += v[i].first;
		}else if(temp+v[i].first == n){
			ans += v[i].second*v[i].first;
			break;
		}else{
			ll count = n-temp;
			ans += count*v[i].second;
			break;
		}
	}
	cout<<ans;
}	