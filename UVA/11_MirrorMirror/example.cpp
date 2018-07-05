// Accepted

#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int n;

void rotate90(char source[10][10]){

	char temp[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp[j][n-i-1] = source[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			source[i][j] = temp[i][j];
		}
	}
	
}
void reflection(char source[10][10]){
	int half = n/2;
	for(int i=0;i<half;i++){
		for(int j=0;j<n;j++){
			swap(source[i][j],source[n-i-1][j]);
		}
	}
}
bool same(char source[10][10],char dest[10][10]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(source[i][j] != dest[i][j]){
				return false;
			}
		}
	}

	return true;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int ite=0;

    
    while(cin>>n && n != 0){
    	ite++;
    	char source[10][10];
	    char dest[10][10];

	    for(int i=0;i<n;i++){
	    	for(int j=0;j<n;j++){
	    		cin>>source[i][j];
	    	}
	    	for(int j=0;j<n;j++){
	    		cin>>dest[i][j];
	    	}
	    }
	    // for(int i=0;i<n;i++){
	    // 	for(int j=0;j<n;j++){
	    // 		cout<<source[i][j]<<" ";
	    // 	}
	    // 	cout<<"     ";
	    // 	for(int j=0;j<n;j++){
	    // 		cout<<dest[i][j]<<" ";
	    // 	}
	    // 	cout<<endl;
	    // }
	    
	    if(same(source,dest)){

	    	cout<<"Pattern "<<ite<<" was preserved.\n";
	    	continue;
	    }
	    rotate90(source);
		if(same(source,dest)){

			cout<<"Pattern "<<ite<<" was rotated 90 degrees.\n";
			continue;
		}
		rotate90(source);
		if(same(source,dest)){

			cout<<"Pattern "<<ite<<" was rotated 180 degrees.\n";
			continue;
		}
		rotate90(source);
		if(same(source,dest)){

			cout<<"Pattern "<<ite<<" was rotated 270 degrees.\n";
			continue;
		}
		rotate90(source); // same as initial
		reflection(source);
		if(same(source,dest)){
			cout<<"Pattern "<<ite<<" was reflected vertically.\n";
			continue;
		}
		rotate90(source);
		if(same(source,dest)){
			cout<<"Pattern "<<ite<<" was reflected vertically and rotated 90 degrees.\n";
			continue;
		}
		rotate90(source);
		if(same(source,dest)){
			cout<<"Pattern "<<ite<<" was reflected vertically and rotated 180 degrees.\n";
			continue;
		}
		rotate90(source);
		if(same(source,dest)){
			cout<<"Pattern "<<ite<<" was reflected vertically and rotated 270 degrees.\n";
			continue;
		}

		// improperly transformed
		cout<<"Pattern "<<ite<<" was improperly transformed.\n";
    }

    
}