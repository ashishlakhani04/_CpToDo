// Solved
// http://codeforces.com/problemset/problem/459/B
#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    ll n;
    cin>>n;

    ll* a=new ll[n];
    ll minE = INT_MAX;
    ll maxE = INT_MIN;
    unordered_map<ll,ll> um;
    for(int i=0;i<n;i++){
        cin>>a[i];
        um[a[i]]++;
        minE = min(minE,a[i]);
        maxE = max(maxE,a[i]);
    }
    cout<<maxE-minE<<" ";
    if(minE == maxE){
        cout<<(n*(n-1))/2;
        return 0;
    }
    cout<<um[minE]*um[maxE];


    
}