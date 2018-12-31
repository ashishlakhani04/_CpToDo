// divide by 3
// divide by 2
// subtract 1

#include <iostream>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int recursion(int n){
	if(n == 1){
		return 0;
	}

	int ans1 = INT_MAX,ans2 = INT_MAX,ans3 =INT_MAX;
	if(n%3 == 0){
		ans1 = recursion(n/3)+1;
	}
	if(n%2 == 0){
		ans2 = recursion(n/2)+1;
	}
	ans3 = recursion(n-1)+1;
	return min(ans1,min(ans2,ans3));

}
int topDown(int n){
	if(n == 1){
		return 0;
	}

	int ans1 = INT_MAX,ans2 = INT_MAX,ans3 =INT_MAX;
	if(n%3 == 0){
		ans1 = recursion(n/3)+1;
	}
	if(n%2 == 0){
		ans2 = recursion(n/2)+1;
	}
	ans3 = recursion(n-1)+1;

	return min(ans1,min(ans2,ans3));

}

int dynamic(int n){

	int dp[n+1];

	dp[0]=-1;
	dp[1]=0;

	for(int i=2;i<=n;i++){

		int ans1 = INT_MAX,ans2 = INT_MAX,ans3 =INT_MAX;

		if(i%3 == 0){
			ans1 = dp[i/3]+1;
		}
		if(i%2 == 0){
			ans2 = dp[i/2]+1;
		}
		ans3 = dp[i-1]+1;

		dp[i] = min(ans1,min(ans2,ans3));

	}


	return dp[n];

}

int greedy(int n){

	int step=0;

	while(n>1){

		step++;
		if(n%3 == 0){
			n /= 3;
		}
		else if(n%2 == 0){
			n /= 2;
		}else{
			n--;
		}

	}
	if(n == 1){
		return step;
	}
	return -1;

}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

	int n;
	cin>>n;

	cout<<greedy(n)<<endl;
	cout<<recursion(n)<<endl;
	cout<<dynamic(n)<<endl;
	return 0;
}