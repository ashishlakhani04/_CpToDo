// Solved
// Link - https://www.spoj.com/problems/GSS1/
// Link - https://www.spoj.com/problems/GSS3/
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
class Node{
public:
    ll best,total,prefix,suffix;
};
void updateNode(Node tree[],ll index,ll s,ll e,ll i,ll inc){
    if(i<s||i>e){
        return;
    }
    if(s==e){
        tree[index].prefix = inc;
        tree[index].suffix = inc;
        tree[index].total = inc;
        tree[index].best = inc;
        return;
    }
    /// i is lying in the range s to e
    ll mid = (s+e)/2;
    updateNode(tree,2*index,s,mid,i,inc);
    updateNode(tree,2*index+1,mid+1,e,i,inc);
    tree[index].prefix = max(tree[2*index].prefix,tree[2*index].total+tree[2*index+1].prefix);
    tree[index].suffix = max(tree[2*index+1].suffix,tree[2*index].suffix+tree[2*index+1].total);
    tree[index].total = tree[2*index].total+tree[2*index+1].total;
    tree[index].best = max(tree[2*index].suffix+tree[2*index+1].prefix,max(tree[2*index].best,tree[2*index+1].best));
    return;
}
Node query(Node tree[],ll index,ll s,ll e,ll qs,ll qe){
    ///No Overlap
    Node t;
    if(qs>e || qe<s){
        t.prefix = t.suffix = t.best = INT_MIN;
        t.total = 0;
        return t;
    }
    ///Complete Overlap
    if(qs<=s && qe>=e){
       return tree[index];
    }

    ///Partial Overlap
    ll mid = (s+e)/2;
    Node t1 = query(tree,2*index,s,mid,qs,qe);
    Node t2 = query(tree,2*index+1,mid+1,e,qs,qe);

    // return max(leftAns,max(rightAns,rightAns+leftAns));
    t.prefix = max(t1.prefix,t1.total+t2.prefix);
    t.suffix = max(t2.suffix,t2.total+t1.suffix);
    t.total = t1.total+t2.total;
    t.best = max(t1.suffix+t2.prefix,max(t1.best,t2.best));
    return t;
}
void buildTree(Node tree[],ll *a,ll index,ll s,ll e){
    ///Base Case
    if(s==e){
        tree[index].prefix = a[s];
        tree[index].suffix = a[s];
        tree[index].total = a[s];
        tree[index].best = a[s];
        return;
    }
    if(s>e){
        return;
    }

    ///Recursive Case
    ll mid = (s+e)/2;
    buildTree(tree,a,2*index,s,mid);
    buildTree(tree,a,2*index+1,mid+1,e);
    // tree[index] = max(tree[2*index],max(tree[2*index+1],tree[2*index]+tree[2*index+1]));
    tree[index].prefix = max(tree[2*index].prefix,tree[2*index].total+tree[2*index+1].prefix);
    tree[index].suffix = max(tree[2*index+1].suffix,tree[2*index].suffix+tree[2*index+1].total);
    tree[index].total = tree[2*index].total+tree[2*index+1].total;
    tree[index].best = max(tree[2*index].suffix+tree[2*index+1].prefix,max(tree[2*index].best,tree[2*index+1].best));


}

int main(){ 

    fastio;
    fastcin;
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    ll n;
    cin>>n;

    ll* a=new ll[n];
    Node tree[4*n+1];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    buildTree(tree,a,1,0,n-1);

    ll q;
    cin>>q;

    while(q--){
        int c;
        cin>>c;

        if(c == 0){

            ll x,y;
            cin>>x>>y;
            x--;y--;
            updateNode(tree,1,0,n-1,x,y);
            continue;
        }
        ll x,y;
        cin>>x>>y;
        x--;y--;
        ll ans = query(tree,1,0,n-1,x,y).best;
        // ll ans=0;
        cout<<ans<<"\n";
    }

    return 0;
}