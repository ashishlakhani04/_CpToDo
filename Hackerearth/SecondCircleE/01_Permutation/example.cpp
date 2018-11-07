// Accepted
// Link- https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/t1-1-6064aa64/description/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <climits>
#include <queue>
#include <string>
#include <map>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
bool isSorted(int* a,int* b,int n){
   for(int i=0;i<n;i++){
      if(a[i] != b[i]){
         return false;
      }
   }
   return true;
}

int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;
    cin>>n;
    string source="";
    for(int i=0;i<n;i++)
    {   int x;
        cin>>x;
        source+=('0'+x);
    }
    string dest=source;             
    sort(dest.begin(),dest.end());
    queue<string> q;
    q.push(source);
    map<string,int> m;
    m[source]=0;
    while(!q.empty())
    {   string next=q.front();
        q.pop();
        if(next==dest)
        {   cout<<m[next]<<endl;
            break;
        }
        for(int i=2;i<n+1;i++)
        {   string p=next;
            reverse(p.begin(),p.begin()+i);
            if(m.find(p)==m.end())
            {   m[p]=m[next]+1;
                q.push(p);
            }
        }
    }

    return 0;

}