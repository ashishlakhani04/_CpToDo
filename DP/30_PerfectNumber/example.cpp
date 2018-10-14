// Solved
// Link: http://codeforces.com/problemset/problem/919/B
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
int cal(int num){
	int ans = 0;
	while (num){
		ans += num % 10;
		num /= 10;
	}
	return ans;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
	int ans = 0;
	while (n){
		ans ++;
		if (cal(ans) == 10) n--;
	}
	printf("%d\n", ans);
    return 0;
	

}