// Solved
// https://codeforces.com/problemset/problem/86/D
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
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
const int N=2e5+10;
int a[N],pos[N],n,m;
ll cnt[5*N],ans;

struct node
{
    int l,r,id;
    ll ans;
}ask[N];

bool cmp(node a,node b)
{
    if (pos[a.l]==pos[b.l]) return a.r<b.r;
    else return a.l<b.l;
}

bool cmp1(node a,node b)
{
    return a.id<b.id;
}

void update(int id,int add)
{
    ans-=(ll)cnt[a[id]]*cnt[a[id]]*a[id];
    cnt[a[id]]+=add;
    ans+=(ll)cnt[a[id]]*cnt[a[id]]*a[id];
}

int main(){

    // fastio;
    // fastcin;

    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);
    
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    int block=int(sqrt(n));
    for (int i=1;i<=n;i++)
    {
        pos[i]=(i-1)/block+1;
    }
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&ask[i].l,&ask[i].r);
        ask[i].id=i;
    }
    sort(ask+1,ask+m+1,cmp);
    int l=1,r=0;
    for (int i=1;i<=m;i++)
    {
        for (;r<ask[i].r;r++) update(r+1,1);
        for (;r>ask[i].r;r--) update(r,-1);
        for (;l<ask[i].l;l++) update(l,-1);
        for (;l>ask[i].l;l--) update(l-1,1);
        ask[i].ans=ans;
    }
    sort(ask+1,ask+1+m,cmp1);
    for (int i=1;i<=m;i++)
    {
        // printf("%d\n",ask[i].ans);
        cout<<ask[i].ans<<"\n";
    }


}