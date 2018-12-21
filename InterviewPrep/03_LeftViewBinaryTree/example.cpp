// ToDo
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
};
void insert(Node* head){
	queue<int> q;
	int temp;
	cin>>temp;

	head->ele = temp;
	q.push(head);

	while(!q.empty()){
		Node* n = q.front();
		q.pop();

		int l,r;
		cin>>l>>r;

		if(left != -1){
			n->left = l;
		}else{
			n->left = NULL;
		}
		if(right != -1){
			he
		}
	}
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);


    

}