// TLE
// https://uva.onlinejudge.org/external/113/11312.pdf
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
bool isValid(int total,int check){
    if(check >= 1 && check <= total){
        return true;
    }
    return false;
}
class Graph
{
    map<int,list<int> > adjList;
public:
    void addEdge(int a,int b){
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    int bfs(int total,int start,int end,int left,int right){

        queue<int> q;
        map<int,int> dist;

        q.push(start);
        dist[start] = 0;

        while(!q.empty()){

            int node = q.front();
            q.pop();

            if(isValid(total,node-left) && dist.find(node-right) == dist.end()){
                addEdge(node,node-left);
                dist[node-left] = INT_MAX;
            }

            if(isValid(total,node+right) && dist.find(node+right) == dist.end()){
                addEdge(node,node+right);
                dist[node+right] = INT_MAX;
            }

            for(int i:adjList[node]){
                if(dist.find(i) != dist.end()){

                    if(dist[i] == INT_MAX){
                        q.push(i);
                        dist[i] = dist[node]+1;
                        continue;
                    }
                    else if(dist[i] > dist[node]+1){
                        q.push(i);
                        dist[i] = dist[node]+1;
                    } 
                    
                }

            }

        }

        if(dist.find(end) == dist.end() || dist[end] == INT_MAX){
            return -1;
        }
        return dist[end];
        // return 1;


    }
    
};
int main(){

    fastio;
    fastcin;

    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    
    int test;
    cin>>test;

    while(test--){

        int n,l,r,t;

        cin>>n>>l>>r>>t;

        Graph G;
        int ans = G.bfs(n,1,t,l,r);
        if(ans == -1){
            cout<<"uh-oh!\n";
        }else{
            cout<<ans<<"\n";
        }
    }
    


    return 0;


}