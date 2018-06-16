#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);



	int n,l;
	cin>>n>>l;

	int* a=new int[n+1];
	a[0]=0;

	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	int ans=0;
	int cnt=1;
	for(int i=l-1;i>=1;i--){
		if(a[i] && a[cnt+l] && (cnt+l <= n)){
			//cout<<"h";
			ans+=2;
			a[i]=0;
			a[cnt+l]=0;
		}else if((a[i]) && (cnt+l > n)){
			//cout<<"e";
			ans+=1;
			a[i]=0;
		}
		cnt++;
	}
	cnt=1;
	for(int i=l+1;i<=n;i++){
		if((a[i]) && (l-cnt > 0) && a[l-cnt]){
		  //  cout<<i<<endl;
			ans+=2;
			a[i]=0;
			a[l-cnt]=0;
		}
		else if((a[i]) && (l-cnt <= 0)){
			ans+=1;
			a[i]=0;
		}
		cnt++;
	}
	if(a[l]){
		//cout<<"hello";
		ans++;
	}

	cout<<ans;

}