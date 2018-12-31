// Solved
// Link :- https://www.geeksforgeeks.org/for-each-element-in-1st-array-count-elements-less-than-or-equal-to-it-in-2nd-array-set-2/
#include <iostream>
#include <queue>
#include <map>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
  
#define MAX 100000 
using namespace std;

void lessThan(int* a,int* b,int n){
	sort(b,b+n);
	for(int i=0;i<n;i++){
		int ele = a[i];

		cout<<(upper_bound(b,b+n,ele)-b)<<" ";
	}
	return;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    int* a=new int[n];
    int* b=new int[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }

    // using binary search
    lessThan(a,b,n);


    return 0;

}