// Solved
// Link :- https://www.geeksforgeeks.org/print-left-view-binary-tree/
#include <iostream>
#include <queue>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
	Node* left;
	int ele;
	Node* right;
	Node(int ele){
		this->ele = ele;
	}
};
void insert(Node* head){
	queue<Node*> q;
	int temp;
	cin>>temp;

	head->ele = temp;
	q.push(head);

	while(!q.empty()){
		Node* n = q.front();
		q.pop();

		int l,r;
		cin>>l>>r;

		if(l != -1){
			n->left = new Node(l);
			q.push(n->left);
		}else{
			n->left = NULL;
		}
		if(r != -1){
			n->right = new Node(r);
			q.push(n->right);
		}else{
			n->right = NULL;
		}
	}
}
void print(Node* head){
	if(head != NULL){
		cout<<head->ele<<" ";
		print(head->left);
		print(head->right);
	}
	
}
void printLeftView(Node* head,int level,int* max_level){
	if(head == NULL){
		return;
	}
	if(*max_level < level){
		cout<<head->ele;
		*max_level = level;
	}
	printLeftView(head->left,level+1, max_level);
	printLeftView(head->right,level+1,max_level);
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    Node* head = new Node(-1);
    insert(head);
    int max_level = 0;
    printLeftView(head,1,&max_level);

}