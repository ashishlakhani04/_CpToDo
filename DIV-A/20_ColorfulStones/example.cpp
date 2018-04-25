#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int present=0;
    int i;
    
    for(int i=0;i<s2.length();i++){

        char niche = s2[i];
        char uppar = s1[present];

        if(niche == uppar){
            // i++;
            present++;
            //uppar = s1[present];
        }

    }
    cout<<present+1;

}