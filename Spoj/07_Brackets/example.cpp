// ToDo
// Link - https://www.spoj.com/problems/BRCKTS/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#include <stack>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
string str;
bool isValid(int start,int end){
    string expr = "";
    for(int i=start;i<=end;i++){
        expr += str[i];
    }
    stack<char> s; 
    char x;  
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            s.push(expr[i]); 
            continue; 
        } 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
}
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

    return min(leftAns,rightAns);
}
void updateNode(int *tree,int index,int s,int e,int i,int inc){
    if(i<s||i>e){
        return;
    }
    if(s==e){
        tree[index] += inc;
        return;
    }
    /// i is lying in the range s to e
    int mid = (s+e)/2;
    updateNode(tree,2*index,s,mid,i,inc);
    updateNode(tree,2*index+1,mid+1,e,i,inc);
    tree[index] = min(tree[2*index],tree[2*index+1]);
    return;
}
void buildTree(bool *tree,int index,int s,int e){
    ///Base Case
    if(s==e){
        tree[index] = false;
        return;
    }
    if(s>e){
        return;
    }

    ///Recursive Case
    int mid = (s+e)/2;
    buildTree(tree,2*index,s,mid);
    buildTree(tree,2*index+1,mid+1,e);
    // tree[index] = min(tree[2*index],tree[2*index+1]);
    tree[index] = isValid(s,e);
}

int main(){ 

    fastio;
    fastcin;
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    for(int k=0;k<1;k++){
        int n;
        cin>>n;
        cin>>str;

        int q;
        cin>>q;

        while(q--){
            int c;
            cin>>c;

            if(c == 0){

            }else{

            }
        }
    }

    return 0;
}