
// Codeforces : http://codeforces.com/problemset/problem/337/A
// Accepted : Greedy

#include <iostream>
#include <climits>
#include <queue>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

	// priority_queue<int> pq;
	int n,m;
	cin>>n>>m;

	int* a=new int[m];

	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m);
	int start=0;
	int end=n-1;
	
	int diff = INT_MAX;
	while(end<m){
		diff = min(diff,a[end]-a[start]);
		start += 1;
		end += 1; 
	}
	
	cout<<diff;
}