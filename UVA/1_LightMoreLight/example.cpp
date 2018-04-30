#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int countDivisors(int x){
	int count = 0;

	for(int i=1;i<sqrt(x);i++){
		if(x % i == 0){
			count += 2;
		}
	}

	if(sqrt(x) - (int)(sqrt(x))){
		return count;
	}
	return count + 1;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int x;
	cin>>x;
	while(x != 0){
		
		int num = countDivisors(x);
		if(num % 2 == 0){
			cout<<"no\n";
		}else{
			cout<<"yes\n";
		}
		cin>>x;
	}

	return(0);

}