// Solved
// https://codeforces.com/contest/356/problem/A
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
using namespace std;
int main(){

    fastio;
    fastcin;

    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    int n,m;

    cin>>n>>m;
    int* answer = new int[n];
    set<int> alive;
    for(int i=0;i<n;i++){

        alive.insert(i);

    }
    for(int i=0;i<n;i++){
      answer[i] = 0;
    }
    while(m--){

        int x,y,winner;
        cin>>x>>y>>winner;
        x--;y--;winner--;
        auto it = alive.lower_bound(x);
        vector<int> del;
        while(it != alive.end()){

            int temp = *it;
            if(temp>y){
                break;
            }
            if(temp != winner){
              del.push_back(temp);
              answer[temp] = winner+1;
            }
            it++;

        }
        for(int i=0;i<del.size();i++){
            alive.erase(del[i]);
        }

    }
    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }


    return 0;


}