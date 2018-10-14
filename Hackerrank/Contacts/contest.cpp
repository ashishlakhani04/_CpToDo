// ToDo
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
#define mod 1000000007
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    while(t--){

        double x;
        int y;

        cin>>x>>y;
        int seven = ceil(3*(x/4));
        if(seven>y){
            cout<<(y+seven)<<"\n";
        }else{
            cout<<0<<"\n";
        }
        
    }
   
	

}