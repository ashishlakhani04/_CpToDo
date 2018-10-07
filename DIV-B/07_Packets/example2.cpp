#include <iostream>
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
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    
	int n,x,y;
    cin>>n>>x>>y;
    ll ans=0;
    int* a=new int[n];
    map<int,bool> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(m[a[i]]){
            int actual = a[i];
            int b=1;
            while(m[a[i]-1]){
                b++;
                a[i] = a[i]-1;
            }
            if(b*y >= x){
                ans += x;
                m[actual]=false;
            }
            else{
                ans += 
            }

        }else{  
            m[a[i]]=true;
        }
    }
}