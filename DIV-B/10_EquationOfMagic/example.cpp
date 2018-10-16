// Solved
// http://codeforces.com/contest/1064/problem/B
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
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;
        long long ans = pow(2,__builtin_popcount(a));
        cout<<ans<<"\n";
    }


    
}