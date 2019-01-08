// Solved
// Link :- https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
#include <iostream>
#include <queue>
#include <map>
#include <stack>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
void swap(char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void findNext(string s,int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(s[i]>s[i-1]){
			break;
		}
	}

	if(i == 0){
		cout<<"Next number is not possible";
		return;
	}

	int x = s[i-1],smallest = i;
	for(int j=i+1;j<n;j++){
		if(s[j]>x && s[j]<s[smallest]){
			smallest = j;
		}
	}

	swap(&s[smallest],&s[i-1]);
	sort(s.begin()+i,s.end());
	cout<<s;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    string s;
    cin>>s;

    int n = s.length();
    findNext(s,n);

    

    return 0;

}