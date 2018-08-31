// Solved
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <map>
#include <set>
#include <cstring>
#include <math.h>
#define ld long double
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int t;
    cin>>t;

    while(t--){
        string s1,s2;

        cin>>s1>>s2;
        unordered_map<char,bool> um1;
        for(auto i:s1){
            um1[i] = true;
        }
        bool mila=false;
        for(auto i:s2){
            if(um1[i]){
                mila=true;
                break;
            }
        }
        if(mila){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}