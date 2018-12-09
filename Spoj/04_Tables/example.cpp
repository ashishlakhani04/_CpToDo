// Accepted
// Link - https://www.spoj.com/problems/AE1B/
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

    int n,k,s;
    cin>>n>>k>>s;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int req = k*s;

    int ans=0;
    int j=n-1;
    while(req>0){
        ans++;
        req -= a[j--];
    }

    cout<<ans;

    return 0;
}