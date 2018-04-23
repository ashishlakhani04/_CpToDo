#include <iostream>
#include <math.h>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);



	int a[6][6];
	int row,col;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){

			cin>>a[i][j];
			if(a[i][j]){
				row=i;
				col=j;
			}

		}
	}

	int rowAns = abs(row-3);
	int colAns = abs(col-3);

	cout<<rowAns+colAns;



}