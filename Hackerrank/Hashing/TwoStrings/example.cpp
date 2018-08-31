#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <map>
#include <set>
#include <cstring>
#include <math.h>
#define ld long double
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    ll t;
    cin>>t;

    while(t--){

        ll d,a,m,b,x;
        cin>>d>>a>>m>>b>>x;

        if(d>=x){
            cout<<0<<"\n";
            continue;
        }
        if(x <= (d+a*m)){
            ld rem = x-d;
            cout<<abs(ceil(rem/a))<<"\n";
            continue;
        }
        ll ans =0;
        ans += m;
        ld rem = x-(d+a*m);
        // cout<<rem<<endl;
        if(rem <= a*m+b){
            if(rem<=b){
                cout<<ans+1;
            }else{
                rem -= b;
                // cout<<rem<<endl;
                cout<<abs(ans+ceil(rem/a)+1);
                // cout<<ans+m+1;
            }
            cout<<"\n";
            continue;
        }
        // ans += ceil(rem/a)+1; // check
        ld divi= floor(rem/(a*m+b));
        // cout<<div<<endl;
        ans += (divi*(m+1));
        // cout<<ans<<endl;
        rem = ((int)rem)%(a*m+b);
        // cout<<rem<<endl;
        // cout<<ans<<endl;
        if(rem<=b){
            cout<<ans+1;
        }else{
            // cout<<ans+m+1;
            rem -= b;
            // cout<<rem<<endl;
            cout<<abs(ans+ceil(rem/a)+1);
        }
        cout<<"\n";
    }
}