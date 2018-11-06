// Accepted
// Link- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/plus-plus-60bcac48/description/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
	pair<int,int> p;
	int a,b,c,d,e;
	Node(pair<int,int> p,int a,int b,int c,int d,int e){
		this->p = p;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->e = e;
	}
};
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n,m;
   	cin>>n>>m;
   	int a[n][m];
   	for(int i=0;i<n;i++){
   		for(int j=0;j<m;j++){
   			cin>>a[i][j];
   		}
   	}
   	vector<Node*> v;
   	for(int i=1;i<n-1;i++){
   		for(int j=0;j<m-2;j++){
   			int a1 = a[i][j];
   			int b = a[i][j+1];
   			int c = a[i][j+2];
   			int d = a[i+1][j+1];
   			int e = a[i-1][j+1];
   			v.push_back(new Node(make_pair(i,j),a1,b,c,d,e));
   		}
   	}
   	int ans = INT_MIN;
   	for(int i=0;i<v.size()-1;i++){
   		for(int j=i+1;j<v.size();j++){
   			Node* node1 = v[i];
   			Node* node2 = v[j];

   			int i1 = (node1->p).first;
   			int j1 = (node1->p).second;
   			int i2 = (node2->p).first;
   			int j2 = (node2->p).second;

   			vector<pair<int,int> > temp1,temp2;
   			temp1.push_back(make_pair(i1,j1));
   			temp1.push_back(make_pair(i1,j1+1));
   			temp1.push_back(make_pair(i1,j1+2));
   			temp1.push_back(make_pair(i1+1,j1+1));
   			temp1.push_back(make_pair(i1-1,j1+1));
   			
   			temp2.push_back(make_pair(i2,j2));
   			temp2.push_back(make_pair(i2,j2+1));
   			temp2.push_back(make_pair(i2,j2+2));
   			temp2.push_back(make_pair(i2+1,j2+1));
   			temp2.push_back(make_pair(i2-1,j2+1));
   			
   			bool allWell = true;
   			for(int k=0;k<5;k++){
   				for(int l=0;l<5;l++){
   					if(temp1[k].first == temp2[l].first && temp1[k].second == temp2[l].second){
   						allWell=false;
   					}
   				}
   			}
   			if(allWell){
   				ans = max(ans,((node1->a)*(node2->a))+((node1->b)*(node2->b))+((node1->c)*(node2->c))+((node1->d)*(node2->d))+((node1->e)*(node2->e)));
   			}
   		}
   	}
   	cout<<ans;
	

    return 0;

}