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

int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int a[n+1][4];

        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<3;j++){
                if(j == 0){
                    a[i][j] += min(a[i-1][j+1],a[i-1][j+2]);
                }else if(j == 1){
                    a[i][j] += min(a[i-1][j-1],a[i-1][j+1]);
                }else{
                    a[i][j] += min(a[i-1][j-2],a[i-1][j-1]);
                }
            }
        }
        cout<<min(a[n-1][0],min(a[n-1][1],a[n-1][2]))<<"\n";
    }
}