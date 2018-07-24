// unsolved

#include <iostream>
#include <vector>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

class Node
{
public:
	int d;
	vector<Node*> v;
	int height;
	Node(int d){
		this->d = d;
		this->height=0;
	}
};

class Tree
{
public:
	Tree(){

	}
	void makeTree(vector<int> m){

	}
};

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int n;
	cin>>n;

	Tree T;
	vector<int> m;
	m.push_back(0);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		m.push_back(a);
	}

	map<int,pair<Node*,bool> > isHead;
	
	for(int i=1;i<=n;i++){

		if(m[i] == -1){
			// head
			isHead[i]=make_pair(new Node(i),true);

		}else{
			int child = i;
			int parent = m[i];

			// if(isHead.find(parent) == isHead.end()){
			// 	// nhi mila
			// 	isHead[parent] = make_pair(new Node(parent),false);
			// }
			pair<Node*,bool> p = isHead[parent];

			Node* nd = p.first;
			Node* naya = new Node(child);
			(nd->v).push_back(naya); // beta kaun h
			isHead[child] = make_pair(naya,false);
		}

	}

	// height nikalo, print maxHeight
}