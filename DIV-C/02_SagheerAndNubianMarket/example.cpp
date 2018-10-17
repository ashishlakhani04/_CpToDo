// Solved
// http://codeforces.com/contest/812/problem/C
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
bool isValid(int* a,int n,int mid,int s){
    int sum=0;
    for(int i=1;i<=mid;i++){
        sum += (a[i]+(i)*mid);
    }
    if(sum<=s){
        return true;
    }
    return false;
}
int main(){

    fastio;
    fastcin;    
    
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n,s;
    cin>>n>>s;
    int* a=new int[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);

    int low=1,high=n;
    int ans=0;
    while(low<=high){
        int mid = (low+high)/2;

        if(isValid(a,n,mid,s)){
            ans=mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans<<" ";
    int sum=0;
    for(int i=1;i<=ans;i++){
        sum += (a[i]+(i)*ans);
    }
    cout<<sum;
}