// Solved
// Link - https://www.spoj.com/problems/YELBRICK/
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
int gcd(int x,int y)
{
    while(x!=y){
          if(x>y)
              return gcd(x-y,y);
          else
             return gcd(x,y-x);
     }
     return x;
}
int main(){ 

    fastio;
    fastcin;
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        int a[n][3];
        long long vol=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        int hcf =a[0][0];
        for(i=0;i<n;i++)
        {
            hcf = gcd(hcf,a[i][0]);
            hcf = gcd(hcf,a[i][1]);
            hcf = gcd(hcf,a[i][2]);
        }
        for(i=0;i<n;i++)
        {
            vol+=(long long)((a[i][0]/hcf)*(a[i][1]/hcf)*(a[i][2]/hcf));
        }
        cout<<vol<<"\n";
    }
    return 0;
}