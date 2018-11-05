// Accepted
// Link: http://codeforces.com/contest/1043/problem/A
#include <iostream>
#include <vector>
#include <map>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool isValid(int* a,int n,int maxE,int sum){
    int temp=0;
    for(int i=0;i<n;i++){
        temp += maxE - a[i];
    }
    if(temp>sum){
        return true;
    }
    return false;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    int* a=new int[n];
    int maxE = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        maxE = max(maxE,a[i]);
    }
    while(true){
        if(isValid(a,n,maxE,sum)){
            cout<<maxE;
            return 0;
        }
        maxE++;
    }
}