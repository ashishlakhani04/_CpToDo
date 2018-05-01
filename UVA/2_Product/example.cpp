// Wrong Answer

#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int integer(char c){
	// char to int
	int a = c - '0';

	return a;

}
bool twoDigit(int n){
	if((n/10) == 0){
		return false;
	}
	return true;
}
vector<int> multiply(string s1,string s2){

	vector<int> ans;

	int times=0;

	for(int j=s2.length()-1;j>=0;j--){
		char multiplier = s2[j];
		int imultiplier = integer(multiplier);
		vector<int> temp;
		int carry = 0;
		int mul =0;
		for(int i=s1.length()-1;i>=0;i--){

			char multiplier2 = s1[i];
			int imultiplier2 = integer(multiplier2);

			mul = carry + (imultiplier * imultiplier2);
			carry = 0;
			if(twoDigit(mul)){
				temp.push_back(mul%10);
				mul /= 10;
				carry = mul;
				if(i == 0){
					temp.push_back(carry);
				}
			}else{

				temp.push_back(mul);

			}

		}
			// cout<<"temp: ";
			// for(int i=temp.size()-1;i>=0;i--){
			// 	// ans.push_back(temp[i]);
			// 	cout<<temp[i];
			// }
			// cout<<endl;

		if(j == (s2.length() - 1)){
			for(int i=temp.size()-1;i>=0;i--){
				//cout<<temp[i];
				ans.push_back(temp[i]);
			}

			//cout<<endl;
		}else{
			for(int i=0;i<times;i++){
				temp.insert(temp.begin(),0);
			}
			reverse(temp.begin(),temp.end());
			// for(int i=0;i<temp.size();i++){
			// 	cout<<temp[i];
			// }
			// cout<<endl;
			int carry = 0;
			for(int i=temp.size()-1;i>=0;i--){
				
				int garbage = ans[i];
				if(temp.size()>ans.size()){
					garbage = ans[i-1];
					if(i-1<0){
						garbage=0;
					}
				}

				if(temp.size()>ans.size()){
					garbage = ans[i-1];
					if(i-1<0){
						garbage=0;
					}
				}

				// cout<<temp[i]<<" "<<garbage<<" "<<carry<<endl;
				int add = temp[i]+garbage+carry;
				carry=0;
				if(twoDigit(add)){
					ans[i] = add%10;
					add /= 10;
					carry = add;
					if(i == 0){
						ans.insert(ans.begin(),carry);
					}
				}else{
					if((i == temp.size()-1) && (temp.size()>ans.size())){
						ans.push_back(add);
					}
					else{

						ans[i] = add;
					}
					
				}
			}
			// for(int i=0;i<ans.size();i++){
			// 	cout<<ans[i];
			// }
			// cout<<endl;
		}

		times++;
	}

	return ans;


}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	string s1,s2;

	while(cin>>s1){
		cin>>s2;

		vector<int> ans;
		if(s1.length() < s2.length()){

			ans = multiply(s2,s1);

		}else{

			ans = multiply(s1,s2);

		}
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
		cout<<"\n";
		
	}

}