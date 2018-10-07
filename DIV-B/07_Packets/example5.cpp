#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

    fastio;
    fastcin;    
    
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    
    int t;
    cin>>t;

    while(t--){

        string s1,s2;
        cin>>s1>>s2;

        int m = s1.length();
        int n = s2.length();

        vector<char> v1,v2;
        v1.push_back('0');
        v2.push_back('0');
        for(int i=0;i<m;i++){
            v1.push_back(s1[i]);
        }
        for(int j=0;j<n;j++){
            v2.push_back(s2[j]);
        }

        
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;

            char state1,state2;
            if(x%2 == 0){
                if(v1[x] == '0'){
                    state1 = 'L';
                }else{
                    state1 = 'W';
                }
            }else{
                if(v1[x] == '0'){
                    state1 = 'W';
                }else{
                    state1 = 'L';
                }
            }

            if(y%2 == 0){
                if(v2[y] == '0'){
                    state2 = 'L';
                }else{
                    state2 = 'W';
                }
            }else{
                if(v2[y] == '0'){
                    state2 = 'W';
                }else{
                    state2 = 'L';
                }
            }

            if(state1 == 'W' || state2 == 'W'){
                cout<<1;
            }else{
                cout<<0;
            }
            
        }
        cout<<"\n";
    }
}