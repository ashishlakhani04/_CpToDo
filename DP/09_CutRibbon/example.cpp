// Codeforces : http://codeforces.com/problemset/problem/189/A
// Completed

#include <iostream>
#include <climits>
#include <iomanip>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int brute(int n,int a,int b,int c){
	int maxE = INT_MIN;
	int c1,c2,c3;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int z = (n - (a*i + b*j))/c;

			if(((a*i + b*j + c*z) == n) && (z >= 0)){
				c1=i;c2=j;c3=z;
				maxE = max(maxE,i+j+z);
			}

		}
	}
	// cout<<c1<<" "<<c2<<" "<<c3<<endl;
	return maxE;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

	int n,a,b,c;

	cin>>n>>a>>b>>c;
	cout<<brute(n,a,b,c);

	return 0;
}