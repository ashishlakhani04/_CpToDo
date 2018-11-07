// ToDo
// Link - 
#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool checkPrime(int primes[],int x){
    for(int j=0;j<6;j++){
        if(x == primes[j]){
            return true;
        }
    }
    return false;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int t;
    cin>>t;

    int primes[]={97,101,103,107,109,113};
    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.length();i++){
            int x = s[i];
            
            if(!checkPrime(primes,x)){
                int mila;
                for(int j=0;j<=26;j++){

                    if(checkPrime(primes,x-j) && x-j>=97){
                        mila = x-j;
                        break;
                    }
                    if(checkPrime(primes,x+j) && x+j<=122){
                        mila = x+j;
                        break;
                    }

                }

                x = mila;

            }
            s[i] = x;
        }
        cout<<s<<"\n";
    }

    
    return 0;

	
}