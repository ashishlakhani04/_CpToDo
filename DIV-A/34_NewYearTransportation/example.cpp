#include <iostream>
#include <map>
#include <queue>
#include <vector>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
class Graph{
	map<int,vector<int> > adjList;
public:
	Graph(){

	}
	void addEdge(int a,int b){
		adjList[a].push_back(b);
	}
	bool bfs(int a,int target){

		map<int,bool> visited;
		queue<int> q;
		q.push(a);
		visited[a]=true;

		if(a == target){
			return true;
		}

		while(!q.empty()){
			int ele = q.front();
			q.pop();

			for(int i:adjList[ele]){
				if(i == target){
					return true;
				}
				q.push(i);
				visited[i]=true;
			}
		}

		return false;
	}
};
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);


    int n,t;
	cin>>n>>t;
	Graph G;
	for(int i=1;i<=n-1;i++){
		int a;
		cin>>a;
		G.addEdge(i,i+a);
	}

	if(G.bfs(1,t)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}

}