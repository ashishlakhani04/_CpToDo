#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int n;
    cin>>n;
    int cnt1=0,cnt2=0;
    bool check=false;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a == -1 && cnt2 <= 0){
            cnt1--;
            continue;
        }
        check=true;
        cnt2 += a;
    }
    if(cnt1<0){
        if(cnt2 < 0){
            cout<<abs(cnt1+cnt2);
        }else{
            cout<<abs(cnt1);
        }
    }else{
        cout<<0;
    }

}