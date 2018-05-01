// Question link :- https://www.geeksforgeeks.org/count-numbers-formed-given-two-digit-sum-given-digits/

#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
#define mod 1000000007
#define N 1000005
using namespace std;

int fact[N], invfact[N];

bool check(int sum,int a,int b){
	// function to check if sum of
	// digits is made of a and b
	if(sum == 0){
		return false;
	}
	while(sum){
		if((sum % 10 != a) && (sum % 10 != b)){
			return false;
		}
		sum /= 10;
	}

	return true;
}
void pregenFact(){
	fact[0] = fact[1] = 1;
    for (int i = 1; i <= 1000000; ++i)
        fact[i] = (long long)fact[i - 1] * i % mod;
}
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;
 
    if (m == 1)
        return 0;
 
    while (a > 1) {
 
        // q is quotient
        int q = a / m;
        int t = m;
 
        // m is remainder now, process
        // same as Euclid's algo
        m = a % m, a = t;
        t = y;
 
        // Update y and x
        y = x - q * y;
        x = t;
    }
 
    // Make x positive
    if (x < 0)
        x += m0;
 
    return x;
}
void pregenInverse(){
	invfact[0] = invfact[1] = 1;
 
    invfact[1000000] = modInverse(fact[1000000], mod);
 
    // precalculates the modInverse of all factorials
    // by formulae
    for (int i = 999999; i > 1; --i)
        invfact[i] = ((long long)invfact[i + 1] * 
                      (long long)(i + 1)) % mod;
}

 
// function that returns the value of nCi
int comb(int big, int smal)
{
    return (long long)fact[big] * invfact[smal] % mod * 
                              invfact[big - smal] % mod;
}

int count(int a, int b, int n)
{
    pregenFact();
    pregenInverse();
 
    // if a and b are same
    if (a == b) 
        return (check(a * n, a, b));
 
    int ans = 0;
    for (int i = 0; i <= n; ++i) 
        if (check(i * a + (n - i) * b, a, b)) 
            ans = (ans + comb(n, i)) % mod;
    return ans;
}

int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);


    int a,b,n;

    cin>>a>>b>>n;

    
	cout<<count(a,b,n);

}