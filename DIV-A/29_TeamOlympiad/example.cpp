#include <iostream>
#include <map>
#include <climits>
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

    map<int,vector<int> > m;
    for(int i=0;i<n;i++){
    	int a;
    	cin>>a;
    	m[a].push_back(i+1);
    }
    int minEle = INT_MAX;

	// minEle = min(m[1],min(m[2],m[3]));
    if(m[1].size()==0 || m[2].size() == 0 || m[3].size() == 0){
        cout<<0;
        return 0;
    }
    cout<<min(m[1].size(),min(m[2].size(),m[3].size()))<<endl;
    // for(auto i:m){
    //     for(auto j:i.second){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<minEle;
    vector<vector<int> > v;
    int j=0;
    for(int i=0;i<min(m[1].size(),min(m[2].size(),m[3].size()));i++){
        vector<int> helper1;
        vector<int> helper2;
        vector<int> helper3;
        vector<int> temp;
        helper1 = m[1];
        helper2 = m[2];
        helper3 = m[3];
        temp.push_back(helper1[i]);
        temp.push_back(helper2[i]);
        temp.push_back(helper3[i]);
        v.push_back(temp);
    }
    for(int i=0;i<min(m[1].size(),min(m[2].size(),m[3].size()));i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}