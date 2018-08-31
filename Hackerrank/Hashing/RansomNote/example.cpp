#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <map>
#include <set>
#include <cstring>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int m;
    int n;
    cin>>m>>n;

    unordered_map<string,int> um;
    
    while(m--){
        string s;
        cin>>s;
        um[s]++;
    }   
    bool allWell=true; 
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(um[s]>0){
            um[s]--;
        }else{
            allWell=false;
        }
    }
    if(allWell){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}