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

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    map<int,pair<int,bool> > m;
    m[a]=make_pair(++(m[a].first),false);
    m[b]=make_pair(++(m[b].first),false);
    m[c]=make_pair(++(m[c].first),false);
    m[d]=make_pair(++(m[d].first),false);

    // cout<<m[a].first<<" "<<m[a].second<<endl;
    // cout<<m[b].first<<" "<<m[b].second<<endl;
    // cout<<m[c].first<<" "<<m[c].second<<endl;
    // cout<<m[d].first<<" "<<m[d].second;

    int cnt=0;
    if(m[a].first>1 && m[a].second == false){
        cnt += (m[a].first)-1;
        m[a].second=true;
    }
    if(m[b].first>1 && m[b].second == false){
        cnt += (m[b].first)-1;
        m[b].second=true;
    }
    if(m[c].first>1 && m[c].second == false){
        cnt += (m[c].first)-1;
        m[c].second=true;
    }
    if(m[d].first>1 && m[d].second == false){
        cnt += (m[d].first)-1;
        m[d].second=true;
    }
    cout<<cnt;

}