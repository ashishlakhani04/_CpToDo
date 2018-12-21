// Solved
// Link :- https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/ 
#include <iostream>
#include <queue>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int n;
    cin>>n;

    int* a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    priority_queue<int,vector<int>,greater<int> > pq;
    int ans = 0;
    for(int i=0;i<n;i++){
    	pq.push(a[i]);
    }
    while(pq.size()>1){
    	int temp = pq.top();
    	pq.pop();
    	temp += pq.top();
    	pq.pop();

    	ans += temp;
    	pq.push(temp);
    }
    cout<<ans;
}