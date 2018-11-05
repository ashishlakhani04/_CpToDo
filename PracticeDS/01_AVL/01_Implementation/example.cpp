#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long int
using namespace std;
class Node
{
public:
    int key;
    Node* left;
    Node* right;
    int height;
    Node(int key){
        this->key   = key; 
        this->left   = NULL; 
        this->right  = NULL; 
        this->height = 1;  // new node is initially added at leaf 
    }
    
};
class AVLTree
{
    int height(Node* N){
        if(N == NULL){
            return 0;
        }
        return N->height;
    }
    Node* rightRotate(Node* y){
        Node *x = y->left; 
        Node *T2 = x->right; 
      
        // Perform rotation 
        x->right = y; 
        y->left = T2; 
      
        // Update heights 
        y->height = max(height(y->left), height(y->right))+1; 
        x->height = max(height(x->left), height(x->right))+1; 
      
        // Return new root 
        return x;
    }
    Node* leftRotate(Node* x){
        Node *y = x->right; 
        Node *T2 = y->left; 
      
        // Perform rotation 
        y->left = x; 
        x->right = T2; 
      
        //  Update heights 
        x->height = max(height(x->left), height(x->right))+1; 
        y->height = max(height(y->left), height(y->right))+1; 
      
        // Return new root 
        return y; 
    }
    int getBalance(Node *N) 
    { 
        if (N == NULL) 
            return 0; 
        return height(N->left) - height(N->right); 
    } 
public:
    AVLTree(){}
    Node* insert(Node* node,int key) 
    { 
        /* 1.  Perform the normal BST insertion */
        if (node == NULL) 
            return(new Node(key)); 
      
        if (key < node->key) 
            node->left  = insert(node->left, key); 
        else if (key > node->key) 
            node->right = insert(node->right, key); 
        else // Equal keys are not allowed in BST 
            return node; 
      
        /* 2. Update height of this ancestor node */
        node->height = 1 + max(height(node->left), 
                               height(node->right)); 
      
        /* 3. Get the balance factor of this ancestor 
              node to check whether this node became 
              unbalanced */
        int balance = getBalance(node); 
      
        // If this node becomes unbalanced, then 
        // there are 4 cases 
      
        // Left Left Case 
        if (balance > 1 && key < node->left->key) 
            return rightRotate(node); 
      
        // Right Right Case 
        if (balance < -1 && key > node->right->key) 
            return leftRotate(node); 
      
        // Left Right Case 
        if (balance > 1 && key > node->left->key) 
        { 
            node->left =  leftRotate(node->left); 
            return rightRotate(node); 
        } 
      
        // Right Left Case 
        if (balance < -1 && key < node->right->key) 
        { 
            node->right = rightRotate(node->right); 
            return leftRotate(node); 
        } 
      
        /* return the (unchanged) node pointer */
        return node; 
    }
    void preOrder(Node *root) 
    { 
        if(root != NULL) 
        { 
            cout<<root->key<<" ";
            preOrder(root->left); 
            preOrder(root->right); 
        } 
    }
};
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);
    Node* root = NULL;

    AVLTree A;
    root=A.insert(root,10);
    root=A.insert(root,20);
    root=A.insert(root,30);
    root=A.insert(root,40);
    root=A.insert(root,50);
    root=A.insert(root,25);

    // Pre Order Traversal of AVL
    A.preOrder(root);
}