// Solved
// Link :- https://www.geeksforgeeks.org/find-number-of-islands/
#include <iostream>
#include <queue>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool visited[100][100];
bool isSafe(int a[][100],int n,int m,int i,int j){
	if(i<n && i>=0 && j<m && j>=0 && a[i][j] && !visited[i][j]){
		return true;
	}
	return false;
}
void dfs(int a[][100],int n,int m,int i,int j){
	visited[i][j] = true;
	int helper[] = {0,-1,1};

	for(int k=0;k<3;k++){
		for(int l=0;l<3;l++){
			if(k || l){
				if(isSafe(a,n,m,i+helper[k],j+helper[l])){
					dfs(a,n,m,i+helper[k],j+helper[l]);
				}
			}
		}
	}
}
int countIslands(int a[][100],int n,int m){
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] && !visited[i][j]){
				dfs(a,n,m,i,j);
				cnt++;
			}
		}
	}
	return cnt;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int a[][100]= {  {1, 1, 0, 0, 0}, 
        {0, 1, 0, 0, 1}, 
        {1, 0, 0, 1, 1}, 
        {0, 0, 0, 0, 0}, 
        {1, 0, 1, 0, 1} 
    }; 
    int n = 5,m = 5;

    

    cout<<countIslands(a,n,m);

}