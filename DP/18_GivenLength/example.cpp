#include <iostream>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int s1,s2;
void rec(int num_digits,int num){
	if((num_digits==0 && s1==0) || num>9)
	{
		return;
	}
	if(num_digits==0)
	{
		return;
	}
	if(s1==0)
	{
		cout<<"0";
		return rec(num_digits-1,0);
	}
	if((num_digits-1)*9>=s1-num)
	{
		
		cout<<num;
		s1-=num;
		return rec(num_digits-1,0);
		
		
	}
	else
	{
		return rec(num_digits,num+1);
	}
}
void rec2(int num_digits,int num){
	if(num_digits==0 || s2==0 || num>9)
	{
		return;
	}
	if((num_digits-1)*9>=s2-num)
	{
		
		s2-=num;
		rec2(num_digits-1,0);
		cout<<num;
		
	}
	else
	{
		rec2(num_digits,num+1);
	}
}

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    int m;
    cin>>m>>s1;
    s2 = s1;
    if(m == 1 && s1==0){
    	cout<<0<<" "<<0;
    	return 0;
    }
    if(m == 0 || s1 == 0 || 9*m < s1){
    	cout<<-1<<" "<<-1;
    	return 0;
    }
    
    //cout<<"h";
    // printMin(int m,int s);
    // cout<<" ";
    // printMax(int m,int s);
    rec(m,1);
    cout<<" ";
    rec2(m,0);
    //cout<<"h";
	
}