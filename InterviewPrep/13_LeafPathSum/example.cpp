// Solved
// Link :- https://www.geeksforgeeks.org/shortest-root-to-leaf-path-sum-equal-to-a-given-number/
#include <iostream>
#include <queue>
#include <map>
#include <stack>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;
	vector<pair<int,int> > v;
	Node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};
vector<pair<int,int> > shortestRoot(Node* root){
	if(root->left == NULL && root->right ==NULL){
		vector<pair<int,int> > temp;
		temp.push_back(make_pair(root->data,1));
		return temp;
	}

	if(root->left == NULL){
		vector<pair<int,int> > temp;
		temp.push_back(make_pair(root->data+root->right->data,2));
		return temp;
	}

	if(root->right == NULL){
		vector<pair<int,int> > temp;
		temp.push_back(make_pair(root->data+root->left->data,2));
		return temp;
	}

	vector<pair<int,int> > leftV = shortestRoot(root->left);
	vector<pair<int,int> > rightV = shortestRoot(root->right);

	vector<pair<int,int> > helper;
	for(auto i: leftV){
		helper.push_back(make_pair(root->data + i.first,i.second+1));
	}
	for(auto i: rightV){
		helper.push_back(make_pair(root->data + i.first,i.second+1));
	}
	root->v = helper;
	return helper;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    
    Node* root = new Node(1);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(2);
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    int x = 23;
    vector<pair<int,int> > help= shortestRoot(root);
    int ans = INT_MAX;
    for(auto i:help){
    	if(i.first == x){
    		ans = min(ans,i.second);
    	}
    }
    cout<<ans;

    return 0;

}