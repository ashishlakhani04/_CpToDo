// Solved
// Link - https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=540 

#include <iostream>
#include <map>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Node{
public:
    char data;
    Node* parent;
    int rank;
};
class DisjointSet{
  map<char,Node*> m;
public:
    /**
     * Create a set with only one element.
     */
    void makeSet(char data){
        Node* temp = new Node();
        temp->data=data;
        temp->parent=temp;
        temp->rank=0;
        m[data]=temp;
    }
    /**
     * Combines two sets together to one.
     * Does union by rank
     *
     * @return true if data1 and data2 are in different set before union else false.
     */
    bool unionSet(char data1,char data2)
    {
        Node* temp1=m[data1];
        Node* temp2=m[data2];

        Node* parent1=findSet(temp1);
        Node* parent2=findSet(temp2);

        //if they are part of same set do nothing
        if (parent1->data == parent2->data) {
            return false;
        }

        //else whoever's rank is higher becomes parent of other

        if(parent1->rank >= parent2->rank)
        {
           //increment rank only if both sets have same rank
           parent1->rank = (parent1->rank == parent2->rank) ? parent1->rank + 1 : parent1->rank;
           parent2->parent = parent1;
        }
        else {
            parent1->parent = parent2;
        }


        return true;

    }
    /**
     * Finds the representative of this set
     */
    char findSet(char data) {
    	if(m.find(data) == m.end()){
    		return '@';
    	}
        return findSet(m[data])->data;
    }

    /**
     * Find the representative recursively and does path
     * compression as well.
     */
    Node* findSet(Node* temp)
    {
        Node* parent=temp->parent;
        if(parent == temp)
        {
            return parent;
        }
        temp->parent=findSet(temp->parent);
        return temp->parent;
    }
};
bool available(vector<char> v, char c){
	for(int i=0;i<v.size();i++){
		if(v[i] == c){
			return true;
		}
	}
	return false;
}
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int t;
    cin>>t;

    while(t--){
    	DisjointSet ds;
    	string s;
    	cin>>s;
    	vector<pair<char,char> > pairs;
    	while(s[0] != '*'){

    		pairs.push_back(make_pair(s[1],s[3]));

    		cin>>s;
    	}

    	cin>>s;
    	for(int i=0;i<s.length();i++){
    		if(s[i] != ','){
    			ds.makeSet(s[i]);
    		}
    	}

    	for(int i=0;i<pairs.size();i++){
    		ds.unionSet(pairs[i].first,pairs[i].second);
    	}
    	vector<char> nahiLena;
    	for(int j=0;j<s.length();j++){
    		char search = s[j];
    		if(search == ','){
    			continue;
    		}
    		bool sahi = true;
			for(int i=0;i<pairs.size();i++){
				if(search == pairs[i].first || search == pairs[i].second){
					sahi = false;
					break;
				}
    		}
    		if(sahi){
    			nahiLena.push_back(search);
    		}
    	}
    	int trees = 0,acons=0;
    	map<char,int> m;
    	for(int i=0;i<s.length();i++){
    		if(s[i] != ','){
    			char c = ds.findSet(s[i]);
    			m[c]++;
    		}
    	}

    	for(auto i:m){
    		if(available(nahiLena,i.first)){
    			acons++;
    		}else{
    			trees++;
    		}
    	}
    	cout<<"There are "<<trees<<" tree(s)"<<" and "<<acons<<" acorn(s)."<<"\n";
    }
	

}