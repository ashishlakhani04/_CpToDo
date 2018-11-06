// Accepted
// Link - https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/protect-the-cities-1/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
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

        ll smallX=INT_MAX,smallY=INT_MAX,largeX=INT_MIN,largeY=INT_MIN;
        while(n--){
            ll x,y;
            cin>>x>>y;

            smallX = min(smallX,x);
            smallY = min(smallY,y);

            largeX = max(largeX,x);
            largeY = max(largeY,y);

            

        }
        ll ans = max(abs(largeY-smallY),abs(largeX-smallX));
        cout<<ans*ans<<"\n";

    }

    return 0;
}