// http://codeforces.com/problemset/problem/507/B
// ToDo
#include <iostream>
#include <vector>
#include <math.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    float r,x,y,xd,yd;

    cin>>r>>x>>y>>xd>>yd;

    int ans1= ceil((abs(xd)-abs(x))/(2*r));
	int ans2= ceil((abs(yd)-abs(y))/(2*r));
    cout<<min(ans2,ans1);

}