// Solved
#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int maxProduct(vector<int>& nums) {
    if(nums.empty()) return 0;
    int n = nums.size();
    int maxprod;
    vector<int> pos(n);	// pos[i] contains positive product till num[i]
    vector<int> neg(n); // neg[i] contains negative product till num[i]
    pos[0]=neg[0]=maxprod=nums[0];
 
    for(int i=1;i<n;i++){
        pos[i] = max(max(pos[i-1]*nums[i],neg[i-1]*nums[i]),nums[i]);	//maximum of the three
        neg[i] = min(min(pos[i-1]*nums[i],neg[i-1]*nums[i]),nums[i]);	//minimum of the three
        maxprod=max(maxprod,pos[i]);
    }
 
    return maxprod;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    	int a;
    	cin>>a;
    	v.push_back(a);
    }
    cout<<maxProduct(v);
}