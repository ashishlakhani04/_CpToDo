// Solved
#include <iostream>
#include <vector>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int hourglassSum(vector<vector<int> > arr){

	int ans=INT_MIN;

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){

			int temp=0;
			int startRow=i;
			int endRow=i+2;
			int startCol=j;
			int endCol=j+2;

			for(int k=startRow;k<=endRow;k++){
				for(int l=startCol;l<=endCol;l++){
					temp += arr[k][l];
				}
			}
			temp -= arr[startRow+1][startCol];
			temp -= arr[startRow+1][endCol];
			ans = max(ans,temp);
		}
	}
	return ans;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    // fout << result << "\n";

    // fout.close();
    cout<<result;

    return 0;

}