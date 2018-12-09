// Completed
#include <iostream>
#include <string>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	while(1){
		string s;
		cin>>s;
		if(s!=""){
			map<int,bool> m;
			int n = stoi(s);
			int* a=new int[n];

			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n-1;i++){
				m[abs(a[i]-a[i+1])] =true;
			}
			bool flag=true;
			for(int i=1;i<n;i++){
				if(m[i] == false){
					flag=false;
					break;
				}
			}
			if(flag){
				cout<<"Jolly\n";
			}else{
				cout<<"Not jolly\n";
			}
		}else{
			break;
		}
	}

}