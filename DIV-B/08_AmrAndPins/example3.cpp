#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <climits>
#define ll long long int
#define ld long double
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--)
    {
        ld a,b,c;
        cin>>a>>b>>c;
        a = abs(a);
        b = abs(b);
        c = abs(c);
        ld ans = (ld)((c*c)/2);
        printf("%.7LF\n",ans);
    }
    return 0;


}