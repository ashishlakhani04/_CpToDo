// Accepted
// http://codeforces.com/contest/546/problem/C
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
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
int calcSum(queue<int> q){
    int sum=0;
    while(!q.empty()){
        sum += q.front();
        q.pop();
    }
    return sum;
}
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans *= i;
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

    int k1;
    cin>>k1;

    queue<int> q1,q2;
    for(int i=0;i<k1;i++){
        int a;
        cin>>a;
        q1.push(a);
    }
    int k2;
    cin>>k2;
    for(int i=0;i<k2;i++){
        int a;
        cin>>a;
        q2.push(a);
    }
    int games=0;
    map<pair<int,int>,bool> m1,m2;
    bool result=true;
    while(!q1.empty() && !q2.empty()){

        
        // cout<<calcSum(q1)<<" "<<calcSum(q2)<<endl;

        // if(m1[make_pair(q1.size(),calcSum(q1))]  m2[make_pair(q2.size(),calcSum(q2))]){
        //     result=false;
        //     break;
        // }
        // m1[make_pair(q1.size(),calcSum(q1))] = true;
        // m2[make_pair(q2.size(),calcSum(q2))] = true;
        games++;
        if(games>fact(n+1)){
            result=false;
            break;
        }
        // cout<<q1.front()<<" "<<q2.front()<<endl;
        if(q1.front() > q2.front()){

            q1.push(q2.front());
            q2.pop();
            q1.push(q1.front());
            q1.pop();
        }else{
            q2.push(q1.front());
            q1.pop();
            q2.push(q2.front());
            q2.pop();
        }

    }

    if(result){
        cout<<games<<" ";
        if(q1.empty()){
            cout<<2;
        }else{
            cout<<1;
        }
    }else{
        cout<<-1;
    }


    return 0;
}