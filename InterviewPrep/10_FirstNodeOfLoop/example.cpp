// Solved
// Link :- https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/
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
	Node* next;
};
bool detectLoop(Node* start){
	Node* slow = start;
	Node* fast = start;

	while(slow && fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;

		if(slow == fast){
			return true;
		}
	}
	return false;
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    // initialize linked list and perform detect cycle operation

    

    return 0;

}