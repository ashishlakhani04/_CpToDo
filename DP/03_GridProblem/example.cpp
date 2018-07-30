#include <iostream>
#include <climits>
#include <iomanip>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int greedy(int a[][100],int n,int m){

	int weights=0;
	int xdir=0,ydir=0;
	weights += a[xdir][ydir];
	while(true){

		
		int max1 = INT_MAX,max2 = INT_MAX;
		if(xdir+1<n){
			max1 = a[xdir+1][ydir];
		}
		if(ydir+1<m){
			max2 = a[xdir][ydir+1];
		}

		int choose = min(max1,max2);

		if(choose == max1){
			weights += max1;
			++xdir;
		}else{
			weights += max2;
			++ydir;
		}

		if(xdir == n-1 && ydir == m-1){
			break;
		}

	}
	return weights;
}
int recursion(int a[][100],int n,int m){
	if(n<0 || m<0){
		return INT_MAX;
	}
	if (m == 0 && n == 0){
		return a[n][m];
	}
      
	// cout<<a[n][m]<<endl;
	return a[n][m]+min(recursion(a,n-1,m),recursion(a,n,m-1));
}
int bottomUp(int a[][100],int n,int m){

	int dp[n+1][m+1];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == 0 && j == 0){
				dp[i][j] = a[i][j];
			}else if(i == 0 || j == 0){
				if(i == 0){
					dp[i][j] = a[i][j]+dp[i][j-1];
				}else{
					dp[i][j] = a[i][j]+dp[i-1][j];
				}
			}else{
				dp[i][j] = a[i][j]+min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[n-1][m-1];
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int n,m;
	cin>>n>>m;

	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	cout<<greedy(a,n,m)<<endl;
	cout<<recursion(a,n-1,m-1)<<endl;
	cout<<bottomUp(a,n,m)<<endl;
}