// Accepted
// Link - https://www.spoj.com/problems/ACODE/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>
#include <cstring>
#include <map>
#include <math.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int stringToNum(string s){
    int num  = 0;
    int factor = 0;
    for(int i=s.length()-1;i>=0;i--){
        num += ((s[i]-'0')*pow(10,factor++));
    }
    return num;
}
bool isValid(string s){
    int n = stringToNum(s);
    if(n>=1 && n<=26){
        return true;
    }
    return false;
}
int main(){ 

    fastio;
    fastcin;
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    string s;
    while(cin>>s && s != "0"){
        ll l = s.length();
        ll* dp = new ll[l];

        for(int i=0;i<l;i++){

            if(i == 0){
                if(isValid(to_string(s[i]-'0'))){
                    dp[i] = 1;
                }else{
                    dp[i] = 0;
                }
                continue;
            }
            if(i == 1){
                ll ans=0;
                if(isValid(to_string(s[i]-'0'))){
                    ans += dp[i-1];
                }
                if(isValid(to_string(s[i-1]-'0')+to_string(s[i]-'0')) && (s[i-1] != '0')){
                    ans += 1;
                }
                dp[i] = ans;
                continue;
            }
            ll ans=0;
            if(isValid(to_string(s[i]-'0'))){
                ans += dp[i-1];
            }

            
            if(isValid(to_string(s[i-1]-'0')+to_string(s[i]-'0')) && (s[i-1] != '0')){
                ans += dp[i-2];
            }
            dp[i] = ans;


        }
        // for(int i=0;i<l;i++){
        //     cout<<dp[i]<<" ";
        // }

        cout<<dp[l-1]<<"\n";
    }

    return 0;
}