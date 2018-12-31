// Solved
// https://codeforces.com/contest/653/problem/E
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
#include <list>
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long 
using namespace std;
set<int> remaining;
set<pair<int,int> > forbidden;
bool isOhk(int a,int b){
    if(a>b){
        swap(a,b);
    }
    return forbidden.find(make_pair(a,b)) == forbidden.end();
}
void dfs(int a){
    vector<int> memo;
    for(int b:remaining){
        if(isOhk(a,b)){
            memo.push_back(b);
        }
    }
    for(int b:memo){
        remaining.erase(b);
    }
    for(int b:memo){
        dfs(b);
    }
}
int main(){

    fastio;
    fastcin;

    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
   
    int n,m,k;
    cin>>n>>m>>k;

    for(int i=2;i<=n;i++){
        remaining.insert(i);
    }
    int allowed_degree = n-1;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        if(a>b){
            swap(a,b);
        }
        if(a == 1){
            allowed_degree--;
        }
        forbidden.insert(make_pair(a,b));
    }
    if(allowed_degree<k){
        cout<<"impossible";
        return 0;
    }

    int components = 0;
    for(int i=2;i<=n;i++){
        if(isOhk(1,i) && remaining.find(i) != remaining.end()){
            dfs(i);
            components++;
        }
    }

    if(!remaining.empty()){
        cout<<"impossible";
        return 0;
    }
    if(components > k){
        cout<<"impossible";
        return 0;
    }

    cout<<"possible";



    return 0;


}