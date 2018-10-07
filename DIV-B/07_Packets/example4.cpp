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

        vector<vector<char> > mat;

        for(int i=0;i<=n;i++){
            vector<char> temp;
            for(int j=0;j<=m;j++){
                temp.push_back('0');
            }
            mat.push_back(temp);
        }

        for(int i=1;i<=m;i++){
            if(s1[i-1] == '1'){
                mat[0][i] = 'L';
            }else{
                mat[0][i] = 'W';
            }
        }
        for(int i=1;i<=n;i++){
            if(s2[i-1] == '1'){
                mat[i][0] = 'L';
            }else{
                mat[i][0] = 'W';
            }
        }

        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=m;j++){
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i == 1){

                    if(j == 1){
                        if(mat[i-1][j]=='W' || mat[i][j-1] == 'W'){
                            mat[i][j] = 'W';
                        }else{
                            mat[i][j] = 'L';
                        }
                    }else{
                        if(mat[i-1][j] == 'W' || mat[i][j-1] == 'L'){
                            mat[i][j] = 'W';
                        }else{
                            mat[i][j] = 'L';
                        }
                    }

                }else if(j == 1){

                    if(mat[i][j-1] == 'W' || mat[i-1][j] == 'L'){
                        mat[i][j] = 'W';
                    }else{
                        mat[i][j] = 'L';
                    }

                }else{
                    if(mat[i-1][j] == 'L' || mat[i][j-1] == 'L'){
                        mat[i][j] = 'W';
                    }else{
                        mat[i][j] = 'L';
                    }
                }
            }
        }
        int q=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        // int q;
        // cin>>q;
        // while(q--){
        //     int x,y;
        //     cin>>x>>y;

        //    if(mat[x][y] == 'W'){
        //         cout<<1;
        //     }else{
        //         cout<<0;
        //     }
        //  }
        //  cout<<"\n";
    }
}