#include <iostream>
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

   int check = max(a,b);
   int res=0;
   for(int i=check;i<=6;i++){
    res++;
   }

   int num=res;
   int denom = 6;
   if(num == 1){
    cout<<"1/6";
   }else if(num == 2){
    cout<<"1/3";
   }else if(num == 3){
    cout<<"1/2";
   }
   else if(num == 4){
    cout<<"2/3";
   }else if(num == 5){
    cout<<"5/6";
   }else{
    cout<<"1/1";
   }

}