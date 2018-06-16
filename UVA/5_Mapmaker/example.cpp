// Completed

#include <iostream>
#include <vector>
#include <unordered_map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
	int ba,size,d;
	vector<pair<int,int> > v;

	Node(int ba,int size,int d,vector<pair<int,int> > v){
		this->ba = ba;
		this->size = size;
		this->d = d;
		this->v = v;
	}
};
int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);



	int n,r;
	cin>>n>>r;

	unordered_map<string,Node*> um;
	for(int i=0;i<n;i++){

		string s;
		cin>>s;

		int ba,size,d;

		cin>>ba>>size>>d;

		vector<pair<int,int> > temp;

		for(int i=0;i<d;i++){
			int a,b;
			cin>>a>>b;

			temp.push_back(make_pair(a,b));
		}
		Node* n=new Node(ba,size,d,temp);
		um[s] = n;
	}
	for(int j=0;j<r;j++){
		string s;
		cin>>s;

		Node* n = um[s];
		int dimen = n->d;

		vector<int> dValues;
		for(int i=0;i<dimen;i++){
			int a;
			cin>>a;

			dValues.push_back(a);
		}

		vector<pair<int,int> > temp= n->v;

		int* cValues=new int[dimen+1];

		cValues[dimen] = n->size;
		for(int i=dimen-1;i>=1;i--){
			pair<int,int> p = temp[i];
			cValues[i] = cValues[i+1]*(p.second-p.first+1);
		}
		cValues[0] = n->ba;
		for(int i=1;i<=dimen;i++){
			cValues[0] -= temp[i-1].first*cValues[i]; 
		}
		//cout<<cValues[0]<<endl;

		int ans=cValues[0];

		for(int i=1;i<=dimen;i++){
			ans += dValues[i-1]*cValues[i];
		}
		cout<<s<<"[";
		for(int i=0;i<dimen;i++){
			if(i == dimen-1){
				cout<<dValues[i]<<"] = ";
			}else{
				cout<<dValues[i]<<", ";
			}
		}
		cout<<ans<<"\n";

	}

}