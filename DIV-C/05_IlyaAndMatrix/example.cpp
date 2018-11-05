// Solved
// http://codeforces.com/contest/313/problem/C
#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <cstdio>
#include <numeric> 
// #include <bits/stdc++.h>
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define ll long long 
using namespace std;
int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

      int n;
      long long s;
      vector<int> a;

      scanf("%d", &n);
      a.resize(n);
      for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
      }
      sort(a.rbegin(), a.rend());
      s = 0;
      for (int m = 1; m <= n; m *= 4) {
        s += accumulate(a.begin(), a.begin() + m, 0LL);
      }
      cout << s << endl;

      return 0;


    return 0;
}