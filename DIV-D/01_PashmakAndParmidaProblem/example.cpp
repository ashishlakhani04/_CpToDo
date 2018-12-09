// Solved
// https://codeforces.com/contest/459/problem/D
#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <cstdio>
#include <numeric> 
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long 
const int max_n = 1e6 + 10;
using namespace std;

void update(int* fen,int n,int p,ll val){
    for(int i = p;i <= n;i += i & -i){
        fen[i] += val;
    }
}

ll sum(int* fen,int p){
    int ans = 0;
    for(int i=p;i;i-=i&-i){
        ans += fen[i];
    }
    return ans;
}

int main(){

    fastio;
    fastcin;

    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    
    int n;
    cin>>n;

    int* a=new int[n];
    int* bf=new int[n];
    int* af=new int[n];
    int* fen=new int[max_n];
    map<int,int> m,m1;

    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        bf[i] = m[a[i]];
    }

    for(int i=n-1;i>=0;i--){
        m1[a[i]]++;
        af[i] = m1[a[i]];
    }

    ll k=0;
    for(int i=n-1;i>=0;i--){
        k += sum(fen,bf[i]);
        update(fen,n,af[i]+1,1);
    }
    

    cout<<k;


    return 0;


}