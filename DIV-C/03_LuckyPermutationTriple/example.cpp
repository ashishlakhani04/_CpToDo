// Solved
// http://codeforces.com/contest/304/problem/C
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

    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<-1;
        return 0;
    }
    if(n == 1){
        cout<<"0\n0\n0";
        return 0;
    }
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i=1;i<n;i++){
        cout<<i<<" ";
    }
    cout<<0<<"\n";
    for(int i=1;i<n;i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }

    return 0;
}