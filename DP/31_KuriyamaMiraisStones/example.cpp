// Solved
// Link: http://codeforces.com/problemset/problem/433/B
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <stdio.h>
#include <map>
#include <stack>
#include <algorithm>
#include <unordered_map>
#define ll long long int
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

	ll* a=new ll[n];
	ll* b=new ll[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b,b+n);

	ll* pre1 = new ll[n];
	ll* pre2 = new ll[n];

	for(int i=0;i<n;i++){
		if(i == 0){
			pre1[i]=a[i];
		}else{
			pre1[i] = a[i]+pre1[i-1];
		}
	}
	for(int i=0;i<n;i++){
		if(i == 0){
			pre2[i]=b[i];
		}else{
			pre2[i] = b[i]+pre2[i-1];
		}
	}

	int t;
	cin>>t;

	while(t--){
		int c,l,r;
		cin>>c>>l>>r;

		if(c==1){
			if(l == 1){
				cout<<pre1[r-1];
			}else{
				cout<<pre1[r-1]-pre1[l-2];
			}
		}else{
			if(l == 1){
				cout<<pre2[r-1];
			}else{
				cout<<pre2[r-1]-pre2[l-2];
			}
		}
		cout<<"\n";
	}

}