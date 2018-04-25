#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{

public:
	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		this->left=NULL;
		this->right=NULL;
	}

};
Node* build_tree(){

	int d;
	cin>>d;

	if(d == -1){
		return NULL;
	}

	Node* temp = new Node(d);
	temp->left = build_tree();
	temp->right = build_tree(); 

	return temp;
}

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    Node* root = build_tree(); // build_tree recursive function






}

// create a node class
// create a Binary Tree class

// 1(a). build Tree(recursive)
// 1(b). build Tree(level-wise)

// Print the tree
	// Depth first search 
		// preorder,postorder,inorder
	// levelWise print
		// on save line (output)
		// on different line (output) as on tree
// Number of node
// height
// diameter
// fast-diameter
// max sum of the tree subset
// mirror
