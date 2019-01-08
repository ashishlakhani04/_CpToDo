// Solved
// Link - https://www.spoj.com/problems/XMEN/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#include <stack>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int lis(std::vector<int>& v) 
{ 
    if (v.size() == 0) 
        return 0; 
  
    std::vector<int> tail(v.size(), 0); 
    int length = 1; // always points empty slot in tail 
  
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
        if (v[i] > tail[length - 1]) 
            tail[length++] = v[i]; 
        else { 
            // TO check whether the element is not present before hand 
            auto it = find(tail.begin(), tail.begin() + length, v[i]); 
            if (it != tail.begin() + length) { 
                continue; 
            } 
            // If not present change the tail element to v[i] 
            it = upper_bound(tail.begin(), tail.begin() + length, v[i]); 
            *it = v[i]; 
        } 
    } 
  
    return length; 
} 
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

        int* a=new int[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int* b=new int[n+1];
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        map<int,int> m;
        for(int i=1;i<=n;i++){
            m[a[i]] = i;
        }
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(m[b[i]]);
        }

        cout<<lis(v)<<"\n";
    }
}