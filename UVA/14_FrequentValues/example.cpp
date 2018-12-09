// ToDo
// Link - https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2176

#include <iostream>
#include <map>
#include <vector>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define pii pair<int,int>
using namespace std;
pii query(pii *tree,int index,int s,int e,int qs,int qe){
    ///No Overlap
    if(qs>e || qe<s){
        return make_pair(-1,INT_MIN);
    }
    ///Complete Overlap
    if(qs<=s && qe>=e){
       return tree[index];
    }

    ///Partial Overlap
    int mid = (s+e)/2;
    pii leftAns = query(tree,2*index,s,mid,qs,qe);
    pii rightAns = query(tree,2*index+1,mid+1,e,qs,qe);

    if(leftAns.second<rightAns.second){
        return rightAns;
    }
    return leftAns;
}
void buildTree(pii *tree,int *a,int index,int s,int e){
    ///Base Case
    if(s==e){
        tree[index].first = a[s];
        tree[index].second = 1;
        return;
    }
    if(s>e){
        return;
    }

    ///Recursive Case
    int mid = (s+e)/2;
    buildTree(tree,a,2*index,s,mid);
    buildTree(tree,a,2*index+1,mid+1,e);
    // tree[index] = min(tree[2*index],tree[2*index+1]);
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    int n;
    cin>>n;
    while(n!=0){
        int q;
        cin>>q;

        int* a =new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        pii *tree = new pii[4*n+1];
        

        buildTree(tree,a,1,0,n-1);


        while(q--){

            int qs,qe;
            cin>>qs>>qe;
            qs--;qe--;
            pii ans = query(tree,1,0,n-1,qs,qe);
            cout<<ans.second<<"\n";
        }
        cin>>n;
    }

    return 0;

}