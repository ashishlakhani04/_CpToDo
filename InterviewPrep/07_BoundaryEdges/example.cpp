// ToDo
// Link :- https://www.geeksforgeeks.org/find-number-of-islands/
#include <iostream>
#include <queue>
#include <map>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool isValid(int a[][20],int n,int m,int x,int y){
	if(x<n && y<m && x>=0 && y>=0 && a[x][y] != 1){
		return true;
	}
	return false;
}
int bottomUp(int a[][20],int n,int m,int locx,int locy){

	int dp[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == locx && j == locy){
				a[i][j] == 0;
			}else{
				a[i][j] = INT_MAX;
			}
		}
	}

	

}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;

    int a[n][m];
    int locx,locy;
    for(int i=0;i<n;i++){
    	cin>>a[i][j];
    	if(a[i][j] == 2){
    		locx = i;
    		locy = j;
    	}
    }

    int ans = bottomUp(a,n,m,locx,locy);

}