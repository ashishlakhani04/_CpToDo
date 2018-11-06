// ToDo
// Link- 
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool isSorted(int* a,int* b,int n){
   for(int i=0;i<n;i++){
      if(a[i] != b[i]){
         return false;
      }
   }
   return true;
}

int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;

    int* a=new int[n];
    int* b = new int[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
         b[i] = a[i];
    }
    sort(b,b+n);
    int cnt=0;

    while(next_permutation(b,b+n)){
         if(isSorted(a,b,n)){
            break;
         }
         cnt++;
    }

    cout<<cnt-1;
	

    return 0;

}