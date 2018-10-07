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

        vector<char> col;
        vector<char> row;

        col.push_back('0');
        row.push_back('0');

        int q;
        cin>>q;

        for(int i=0;i<m;i++){
            if(i == 0){
                if(s1[i] == '1' && s2[i] == '1'){
                    col.push_back('L');
                }
                else{
                    col.push_back('W');
                }
            }else{
                if(col[i-1] == 'W' && s1[i] == '1'){
                    col.push_back('L');
                }
                else{
                    col.push_back('W');
                }
            }
        }
        for(int i=1;i<n;i++){

            if(i == 1){
                if(col[1] == 'W' && s2[1] == '1'){
                    row.push_back('L');
                }
                else{
                    row.push_back('W');
                }
            }else{
                if(row[i-1] == 'W' && s2[i] == '1'){
                    row.push_back('L');
                }
                else{
                    row.push_back('W');
                }

            }    
        }

        for(int i=1;i<col.size();i++){
           cout<<col[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<row.size();i++){
           cout<<row[i]<<" ";
        }

        // while(q--){
        //     int x,y;
        //     cin>>x>>y;

        //     if(x == 1 || y == 1){
        //         if(x == 1){
        //             if(row[x] == 'W'){
        //                 cout<<1;
        //             }else{
        //                 cout<<0;
        //             }
        //         }else{
        //             if(col[x] == 'W'){
        //                 cout<<1;
        //             }else{
        //                 cout<<0;
        //             }
        //         }
        //     }
        //     else{
        //         if(y>=x){
        //             // first string
        //             int check = y-(x-1);
        //             if(col[check-1] == 'W'){
        //                 cout<<1;
        //             }else{
        //                 cout<<0;
        //             }
        //         }else{
        //             int check = x-(y-1);
        //             if(row[check-1] == 'W'){
        //                 cout<<1;
        //             }else{
        //                 cout<<0;
        //             }
        //         }
        //     }
        // }
        // cout<<"\n";

    }
}