// Accepted
// Link - https://www.spoj.com/problems/ABCDEF/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
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

    int ans=0;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // map<int,bool> um1,um2;
    vector<int> v1,v2;
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            for(int c=0;c<n;c++){
                // um1[arr[a]*arr[b]+arr[c]]++;
                v1.push_back(arr[a]*arr[b]+arr[c]);
            }
        }
    }
    for(int d=0;d<n;d++){
        for(int e=0;e<n;e++){
            for(int f=0;f<n;f++){
                if(arr[d] != 0){
                    // if((arr[a]*arr[b]+arr[c]) == (arr[d]*(arr[e]+arr[f]))){
                    //     ans++;
                    // }
                    // um2[arr[d]*(arr[e]+arr[f])]++;
                    v2.push_back(arr[d]*(arr[e]+arr[f]));
                }
            }
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0;i<v1.size();i++){
        int x = lower_bound(v2.begin(),v2.end(),v1[i]) - v2.begin();
        int y = upper_bound(v2.begin(),v2.end(),v1[i]) - v2.begin();

        ans += y-x;
    }

    cout<<ans;

    return 0;
}