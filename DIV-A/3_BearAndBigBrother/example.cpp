#include <iostream>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int a,b;
	cin>>a>>b;

	int answer=0;
	if(a == b){
		cout<<1;
		return 0;
	}
	while(a<=b){
		a *= 3;
		b *=2;
		answer++;
	}
	cout<<answer;


}