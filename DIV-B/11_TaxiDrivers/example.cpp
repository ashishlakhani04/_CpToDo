// Accepted
// Link - http://codeforces.com/contest/1075/problem/B 
#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <map>
#include <unordered_map>
#include <algorithm>
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

    // int n,m;
    // cin>>n>>m;

    // int* a=new int[n+m];
    // int* b=new int[n+m];

    // for(int i=0;i<n+m;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n+m;i++){
    //     cin>>a[i];
    // }
    vector<ll> nn,mm,tt;
    map<ll,ll> mp;
    ll n,m;
    cin >> n >> m;
    ll t = (n+m);
    for(ll i=0; i<t; i++)
    {
        ll a;
        cin >> a;
        tt.push_back(a);
    }
    for(ll i=0; i<t; i++)
    {
        ll a;
        cin >> a;
        if(a)
            mm.push_back(tt[i]);
        else
            nn.push_back(tt[i]);
    }
    for(ll i=0; i<n; i++)
    {
        ll p = (upper_bound(mm.begin(),mm.end(),nn[i])-mm.begin());
        if(p>=mm.size())
            mp[mm[m-1]]++;
        else if(p==0)
            mp[mm[0]]++;
        else
        {
            ll q = p-1;
            ll d1 = (nn[i]-mm[q]),d2 = (mm[p]-nn[i]);
            if(d1<=d2)
                mp[mm[q]]++;
            else
                mp[mm[p]]++;
        }
    }
    for(ll i=0; i<m; i++)
    {
        if(i!=0)
            cout << " ";
        cout << mp[mm[i]];
    }
}