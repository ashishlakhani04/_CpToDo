// Accepted
// Link - https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
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


    int n;
    cin>>n;

    vector<ll> v;
    int maxE = INT_MIN;
    ll* sum = new ll[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(i == 0){
            sum[i] = a;
        }else{
            sum[i] = sum[i-1]+a;
        }
        v.push_back(a);
        maxE = max(maxE,a);
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;

    while(q--){
        int a;
        cin>>a;
        if(a>maxE){
            cout<<n<<" "<<sum[n-1]<<"\n";
            continue;
        }
        int ite = lower_bound(v.begin(),v.end(),a)-v.begin();
        // if(lower_bound(v.begin(),v.end(),a) == v.end()){
        //     cout<<n<<" "<<sum[n-1]<<"\n";
        //     continue;
        // }
        if(v[ite] == a){
            cout<<ite+1<<" ";
            cout<<sum[ite]<<"\n";
            continue;
        }
        cout<<ite<<" ";
        cout<<sum[ite-1]<<"\n";
    }

    return 0;
}