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
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    string s;
    cin>>s;
    int a = 0;
    int ab = 0;
    int b = 0;
    int ba = 0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='A')
    	{
    		a++;
    	}
    	else if(s[i]=='B' && a==1)
    	{
    		s[i] = 'J';
    		s[i-1] = 'K';
    		ab++;
    		break;
    	}
    	else
    	{
    		a = 0;
    	}
    }
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='B')
    	{
    		b++;
    	}
    	else if(s[i]=='A' && b==1)
    	{
    		s[i] = 'J';
    		s[i-1] = 'K';
    		ba++;
    	}
    	else
    	{
    		b = 0;
    	}
    }
    if(ab && ba)
    {
    	cout<<"YES\n";
    }
    else
    {
    	cout<<"NO\n";
    }
}