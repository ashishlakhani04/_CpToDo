// Solved
// Link :- https://www.geeksforgeeks.org/next-greater-element/
#include <iostream>
#include <queue>
#include <map>
#include <stack>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
void usingStack(int* a,int n){
	stack<int> s;
	s.push(a[0]);

	for(int i=1;i<n;i++){
		if(s.empty()){
			s.push(a[i]);
			continue;
		}
		while(!s.empty() && a[i]>s.top()){
			cout<<a[i]<<" ";
			s.pop();
		}
		s.push(a[i]);
	}

	while(!s.empty()){
		cout<<-1<<" ";
		s.pop();
	}
	return;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    int* a=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    // using stack
    usingStack(a,n);

    return 0;

}