// Solved
// Link: http://codeforces.com/problemset/problem/651/A
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
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
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);
    
    int a,b;
    cin>>a>>b;

    int min=0;
    while(a!=0 && b!=0){
    	if(a == 1 && b == 1){
    		break;
    	}
    	if(a <= b){
    		a++;
    		min++;
    		b -= 2;
    	}else{
    		b++;
    		min++;
    		a -= 2;
    	}
    }

    cout<<min;
    return 0;
}