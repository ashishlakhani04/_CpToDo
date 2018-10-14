// ToDo
#include <iostream>
#include <unordered_map>
#define hashmap unordered_map<char,node*>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class node{
public:
    char data;
    hashmap h;
    bool isTerminal;
    int cnt;

    node(char d)
    {
        data =d;
        isTerminal = false;
        cnt=0;
    }
};
class Trie{
    node* root;

public:
    Trie(){
        root=new node('\0');
    }
    /// Insertion
    void addWord(char* word)
    {
        node* temp=root;
        for(int i=0;word[i]!='\0';i++)
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
    bool search(char* word){
        node* temp=root;

        for(int i=0;word[i]!='\0';i++)
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

};
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);

    Trie t;
    int n;
    cin>>n;

    while(n--){
    	string s1,s2;
    	cin>>s1>>s2;

    	if(s1 == 'add'){

    	}else{

    	}
    }

	

}