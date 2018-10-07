#include <iostream>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;


int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);
    string a;
    cin>>a;
    int A[a.length()+1];
    for(int i=0;i<a.length()+1;i++)
    {
    	A[i] = 0;
    }
    for(int i=0;i<a.length()-1;i++)
    {
    	
    	if(a[i]==a[i+1])
    	{
    		A[i+1] = A[i]+1;
    	}
    	else
    	{
    		A[i+1] = A[i];
    	}
    }
    
    int n;
    cin>>n;
    while(n--)
    {
    	int a,b;
    	cin>>a>>b;
    	cout<<A[b-1]-A[a-1]<<"\n";
    }
}