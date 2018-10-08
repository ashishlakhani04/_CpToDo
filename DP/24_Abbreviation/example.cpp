// ToDo
// Link - https://www.hackerrank.com/challenges/abbr/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dynamic-programming

#include <iostream>
#include <climits>
#include <unordered_map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){

		string a,b;
		cin>>a>>b;
		int n,m;

	    n=a.length();
	    m=b.length();
	    int d[n+1][m+1];
	    for(int j=0;j<=m;j++){
	        if(j==0)
	            d[0][j]=1;
	        else d[0][j]=0;
	    }

	    int count=0;

	    for(int k=1;k<=n;k++){
	        int i=k-1;
	        if(a[i]>=65&&a[i]<=90||count==1){
	            count=1;
	            d[k][0]=0;
	        }else d[k][0]=1; 
	    }

	    for(int k=1;k<=n;k++){
	        int i=k-1;
	        for(int l=1;l<=m;l++){
	            int j=l-1;
	            if(a[i]==b[j]){
	                d[k][l]=d[k-1][l-1];
	                continue;
	            }
	            else {
	                if(toupper(a[i])==b[j]){
	                    d[k][l]=d[k-1][l-1]|d[k-1][l];
	                    continue;
	                }
	            }
	            if(a[i]>=65&&a[i]<=90){
	                d[k][l]=0;
	                continue;
	            }
	            else{
	             d[k][l]=d[k-1][l];
	             continue; 
	            }
	        }
	    }

       if(d[n][m]) cout<<"YES\n";
       else cout<<"NO\n";
	}
	return 0;
}