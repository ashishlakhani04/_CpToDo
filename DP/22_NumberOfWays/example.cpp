#include <iostream>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    
    int n;
    cin>>n;
    int* a=new int[n];

    ll tSum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tSum += a[i];
    }

    if(tSum % 3 == 0){
        ll divSum = tSum/3;
        int chal = 0;
        ll currSum=0;
        for(int i=0;i<n;i++){
            if(chal == 0){
                if(currSum + a[i]==divSum){
                    chal = 1;
                    currSum = 0;
                }
            }
        }
    }else{
        cout<<0;
    }
    
    
    
}