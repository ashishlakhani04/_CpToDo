// Accepted
// Link - https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/easy-35/
#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
    string s1,s2;
    int x;

    Node(string s1,string s2,int x){
        this->s1 = s1;
        this->s2 = s2;
        this->x = x;
    }
};
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        n--;
        map<string,bool > m;
        vector<string> ans;
        vector<Node*> nodes;
        int sum=0;
        for(int i=0;i<n;i++){
            string s1,s2;
            int x;

            cin>>s1>>s2>>x;
            sum += x;

            nodes.push_back(new Node(s1,s2,x));

            if(m[s1]){
                m[s1] = false;
            }else{
                m[s1] = true;
            }

            if(m[s2]){
                m[s2] = false;
            }else{
                m[s2] = true;
            }

        }
        for(auto i: m){
            if(i.second){
                ans.push_back(i.first);
            }
        }
        string matched;
        for(auto i:nodes){
            if(i->s1 == ans[0]){
                matched = ans[0];
                break;
            }else if(i->s1 == ans[1]){
                matched = ans[1];
                break;
            }
        }
        map<string,pair<string,int> > helper;
        for(auto i:nodes){
            helper[i->s1] = make_pair(i->s2,i->x);
        }

        while(true){

            if(helper.find(helper[matched].first) != helper.end()){
                cout<<matched<<" ";
                int x = helper[matched].second;
                matched = helper[matched].first;
                cout<<matched<<" "<<x<<"\n";
            }else{
                cout<<matched<<" ";
                int x = helper[matched].second;
                cout<<helper[matched].first<<" "<<x<<"\n";
                break;
            }

        }

        cout<<sum<<"\n";

    }

    
    return 0;

	
}