#include <iostream>
#include <queue>
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
Node* build_tree_levelwise(){
	cout<<"Enter the root node\n";
	int d;
	cin>>d;
	Node* root= new Node(d);
	queue<Node*> q;
	q.push(root);

	while(!q.empty()){

		Node* temp = q.front();
		q.pop();
		cout<<"Enter the left and right child of "<<temp->data<<"\n";
		int c1,c2;
		cin>>c1>>c2;
		if(c1 != -1){
			Node* child = new Node(c1);
			temp->left = child;
			q.push(child);
		}
		if(c2 != -1){
			Node* child = new Node(c2);
			temp->right = child;
			q.push(child);
		}

	}
	return root;
}
void preorder(Node* root){
	if(root == NULL){
		return;
	}

	// node ->left->right
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(Node* root){
	if(root == NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void inorder(Node* root){
	if(root == NULL){
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
// void levelOrderTrav(Node* root){

// 	queue<Node*> q;
// 	if(root == NULL){
// 		return;
// 	}
// 	q.push(root);
// 	q.push(NULL);

// 	while((!q.empty) || (q.front() == NULL)){
// 		cout<<root->data<<" ";
// 		Node* temp = q.front();
// 		q.pop();
// 		if(temp != NULL){
// 			Node* left=temp->left;
// 			Node* right = temp->right;

// 			if()
// 		}
// 	}

// }
int number_of_node(Node* root){
	if(root == NULL){
		return 0;
	}
	return number_of_node(root->left)+number_of_node(root->right)+1;
}
int height(Node* root){
	if(root == NULL){
		return 0;
	}
	return max(height(root->left),height(root->right))+1;
}

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    // Node* root = build_tree(); // build_tree recursive function

    Node* root = build_tree_levelwise();
    // depth-first search
    cout<<"Preorder: ";preorder(root);cout<<endl;
    cout<<"Postorder: ";postorder(root);cout<<endl;
    cout<<"Inorder: ";inorder(root);cout<<endl;

    // cout<<"Level Order starts\n";
    // levelOrderTrav();
    // cout<<"Level Order ends\n";

    cout<<"Number of nodes in tree are: "<<number_of_node(root)<<endl;

    cout<<"Height of the tree is: "<<height(root)<<endl;

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
