// Solved
// Link - http://codeforces.com/problemset/problem/1033/C

#include<iostream>
using namespace std;
int n;
bool w[100005];
int a[100005];
int pos[100005];
int main(){
	ios::sync_with_stdio(false);
	cin >> n;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
		pos[a[i]]=i;
	}
	for(int i=n; i>=1 ;i--){
		int cur=pos[i];
		for(int j=cur-i; j>=1 ;j-=i){
			if(a[j]>a[cur] && (!w[j])) w[cur]=true;
		}
		for(int j=cur+i; j<=n ;j+=i){
			if(a[j]>a[cur] && (!w[j])) w[cur]=true;
		}
	}
	for(int i=1; i<=n ;i++){
		if(w[i]) cout << 'A';
		else cout << 'B';
	}
	cout << endl;
}