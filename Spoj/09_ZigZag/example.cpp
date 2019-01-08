// Partially Correct
// Link - https://www.spoj.com/problems/ZIGZAG/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#include <stack>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
void next_cell(long long int *x, long long int *y, char c){
    if(c == 'D')
        (*x)++;
    else if(c == 'U')
        (*x)--;
    else if(c == 'R')
        (*y)++;
    else
        (*y)--;
}
int main(){ 

    fastio;
    fastcin;
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    long long int total, n, k, sum, x = 0, y = 0, value, final = 1;
    char c;
    scanf("%lld%lld%c", &n, &k, &c);
    for(int i=0;i<k;i++){
        scanf("%c", &c);
        next_cell(&x, &y, c);
        sum = x+y;
        sum++;
        total = (sum * (sum + 1) / 2);
        sum--;
        if(sum % 2 == 0){
            value = total - (sum - y);
            final += value;
        }
        else{
            value = total - (sum - x);
            final += value;
        }
    }
    printf("%lld", final);
    return 0;

    return 0;
}