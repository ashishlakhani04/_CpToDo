// Accepted
// Link- https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/practice-problems/algorithm/cost-of-data-11/
#include <iostream>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <climits>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define hashmap unordered_map<char,node*>
#define ll long long int
using namespace std;
class node{
public:
    char data;
    hashmap h;
    bool isTerminal;

    node(char d)
    {
        data =d;
        isTerminal = false;
    }
};
class Trie{
    node* root;

public:
    Trie(){
        root=new node('\0');
    }
    /// Insertion
    void addWord(string word)
    {
        node* temp=root;
        for(int i=0;i<word.length();i++)
        {
            char ch=word[i];

            if(temp->h.count(ch) == 0)
            {
                node* child=new node(ch);
                temp->h[ch]=child;
                temp=child;
            }
            else{
                temp=temp->h[ch];
            }
        }
        temp->isTerminal=true;
    }

    /// LookUp
    bool search(string word){
        node* temp=root;

        for(int i=0;i<word.length();i++)
        {
            char ch=word[i];
            if(temp->h.count(ch)){
                temp=temp->h[ch];
            }
            else{
                return false;
            }

        }
        return temp->isTerminal;
    }

    int countNode(node* temp){

         if(temp == NULL){
            return 1;
         }
         int ans=1;

         for(auto i: temp->h){
            ans += countNode(temp->h[i.first]);

         }
         return ans;
    }
    node* address(){
      return root;
    }


};
int main(){

	fastio;
	fastcin;	
	
    
   // freopen("small_input.txt", "r", stdin);
    
   // freopen("small_output.txt", "w", stdout);

   int n;
   cin>>n;
   Trie T;
   for(int i=0;i<n;i++){
      string s;
      cin>>s;
      T.addWord(s);
   }

   node* root = T.address();
   cout<<T.countNode(root);
   return 0;

}