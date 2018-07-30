#include <iostream>
#include <vector>
#include <iomanip>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int greedy(int* a,int n){

	vector<int> temp;
	for(int i=0;i<n;i++){
		temp.push_back(a[i]);
	}
	int year=1;
	int sol=0;
	while(!temp.empty()){

		int f = *(temp.begin());
		int s = *(temp.end()-1);

		int del = min(f,s);
		sol += del*year;
		year++;
		if(f == del){
			temp.erase(temp.begin());
		}else{
			temp.erase(temp.end()-1);
		}
	}
	return sol;
}
int recursion(int* a,int s,int e,int year){
	if(s>e){
		return 0;
	}

	int q1 = a[s]*year + recursion(a,s+1,e,year+1);
	int q2 = a[e]*year + recursion(a,s,e-1,year+1);

	return max(q1,q2);
}
int memo[100][100];
int topDown(int* a,int s,int e,int year){
	if(s>e){
		return 0;
	}

	if(memo[s][e] != -1){
		return memo[s][e];
	}
	int q1 = a[s]*year + recursion(a,s+1,e,year+1);
	int q2 = a[e]*year + recursion(a,s,e-1,year+1);

	memo[s][e] = max(q1,q2);
	return memo[s][e];

}
int bottomUp(int* a,int n){

	int dp[100][100] = {};
	int year = n;

	for(int i=0;i<n;i++){
		dp[i][i] = year*a[i];
	}
	year--;
	for(int len=2;len<=n;len++){
		int srt = 0;
		int end = n-len;
		while(srt<=end){
			int endWindow = srt+len-1;
			dp[srt][endWindow] = max(
					a[srt]*year+dp[srt+1][endWindow],
					a[endWindow]*year+dp[srt][endWindow-1]
				);
			srt++;
		}
		year--;
	}

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<setw(3)<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return dp[0][n-1];

}

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    memset(memo,-1,sizeof(memo));

	int n;
	cin>>n;

	int* a=new int[n];
	for(int i=0;i<n;i++){

		cin>>a[i];

	}
	cout<<greedy(a,n)<<endl;
	cout<<recursion(a,0,n-1,1)<<endl;
	cout<<topDown(a,0,n-1,1)<<endl;
	cout<<bottomUp(a,n)<<endl;

}