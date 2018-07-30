#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int bottomUp(int* cost,int len){

	int* dp = new int[len+1];
	dp[0]=0;
	for(int i=1;i<=len;i++){
		int init = cost[i];
		for(int j=1;j<i;j++){

			int add = cost[j];
			int second = dp[i-j];

			init = max(init,add+second);

		}
		dp[i] = init;

	}
	// for(int i=1;i<=len;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	return dp[len];

}
int recursion(int* cost,int len){

	if(len == 0){
		return 0;
	}

	int ans=0;
	for(int i=1;i<=len;i++){
		int temp = cost[i] + recursion(cost,len-i);
		ans = max(temp,ans);
	}
	return ans;

}
int memo[100];
int topDown(int* cost,int len){

	if(len == 0){
		return 0;
	}
	if(memo[len] != -1){
		return memo[len];
	}

	int ans=0;
	for(int i=1;i<=len;i++){
		int temp = cost[i] + recursion(cost,len-i);
		ans = max(temp,ans);
	}
	memo[len] = ans;
	return ans;

}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int len;
	cin>>len;
	memset(memo,-1,sizeof(memo));
	// cout<<len;

	int* cost =  new int[len+1];

	for(int i=1;i<=len;i++){
		cin>>cost[i];
	}
	cout<<bottomUp(cost,len)<<endl;
	cout<<recursion(cost,len)<<endl;
	cout<<topDown(cost,len);
}