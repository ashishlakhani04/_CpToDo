// Accepted
// Link - https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/practice-problems/algorithm/easy-queries-751f9372/description/
#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n,q;
    cin>>n>>q;

    int* a=new int[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]){
            s.insert(i);
        }
    }

    while(q--){
        int c,idx;
        cin>>c>>idx;

        if(c == 0){
            int ans_l = -1;
            int ans_r = -1;

            set<int>::iterator it_l = s.lower_bound(idx);
            set<int>::iterator it_r = s.upper_bound(idx);
            if(it_l != s.begin() && s.size())
                {
                    --it_l;
                    ans_l = *(it_l);
                }
            if(it_r != s.end() && s.size())
                {
                    ans_r = *(it_r);
                }
            cout << ans_l << " " << ans_r << endl;
        }else{
            s.insert(idx);
        }
    }
    
    return 0;

	
}