// Solved
// Link :- https://www.spoj.com/problems/ANDROUND/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int query(int *tree,int index,int s,int e,int qs,int qe){
    ///No Overlap
    if(qs>e || qe<s){
        return INT_MAX;
    }
    ///Complete Overlap
    if(qs<=s && qe>=e){
       return tree[index];
    }

    ///Partial Overlap
    int mid = (s+e)/2;
    int leftAns = query(tree,2*index,s,mid,qs,qe);
    int rightAns = query(tree,2*index+1,mid+1,e,qs,qe);

    return leftAns&rightAns;
}
void buildTree(int *tree,int *a,int index,int s,int e){
    ///Base Case
    if(s==e){
        tree[index] = a[s];
        return;
    }
    if(s>e){
        return;
    }

    ///Recursive Case
    int mid = (s+e)/2;
    buildTree(tree,a,2*index,s,mid);
    buildTree(tree,a,2*index+1,mid+1,e);
    tree[index] = tree[2*index]&tree[2*index+1];
}
int main(){ 

    fastio;
    fastcin;
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        int* a=new int[n];
        int* tree = new int[4*n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        buildTree(tree,a,1,0,n-1);

        k = min(k,n/2);

        for(int i=0;i<n;i++){

            int res = INT_MAX;

            if(i+k > n-1){
                res &= query(tree,1,0,n-1,i,n-1)&query(tree,1,0,n-1,0,(k-n+i)%n);
            }else{
                res &= query(tree,1,0,n-1,i,i+k);
            }

            if(i-k < 0){
                res &= query(tree,1,0,n-1,0,i)&query(tree,1,0,n-1,n-k+i,n-1);
            }else{
                res &= query(tree,1,0,n-1,i-k,i);
            }

            cout<<res<<" ";

        }
        cout<<"\n";
        
    }


    

    return 0;
}