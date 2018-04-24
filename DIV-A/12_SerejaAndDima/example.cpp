#include <iostream>
#include <vector>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    vector<int> v;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    ll sereja=0,dima=0;
    bool check=true;
    while(!v.empty()){

        if(check){

            int take = max(v[0],v[v.size()-1]);

            sereja += take;
            if(take == v[0]){
                v.erase(v.begin());
            }else{
                v.erase(v.end()-1);
            }

            check=false;
        }else{
            int take = max(v[0],v[v.size()-1]);

            dima += take;
            if(take == v[0]){
                v.erase(v.begin());
            }else{
                v.erase(v.end()-1);
            }


            check=true;

        }

    }
    cout<<sereja<<" "<<dima;

}