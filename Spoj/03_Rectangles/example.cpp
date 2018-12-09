// Accepted
// Link - https://www.spoj.com/problems/AE00/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#define ll long long int
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
    int ans = n;
    for(int i=1;i<=(n);i++){
        for(int j=2;j<=sqrt(i);j++){
            if(i%j == 0){
                ans+=1;
                // int x = n/i;
                // if(x != i){
                //     ans++;
                // }
            }
        }
        
    }
    cout<<ans;

    return 0;
}