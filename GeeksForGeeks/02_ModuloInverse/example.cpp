// https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
// In simple langugage, 
// Consider (a*x)%m
// We have to find x such that (a*x)%m = 1
// 1. Naive Approach is to loop through 0 till m-1
// 		Time Complexity: O(m)
// 2. Using Extended Euclidean Theorem: works when a and m are coprime 
//		Time Complexity: O(Log m)
// 3. We can use Fermat's Little Theorem if we knew that m is a prime number
//		Time Complexity: O(Log m)

#include <iostream>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;
int moduloInverseNaive(int a,int m){
	for(int i=1;i<=m-1;i++){
		if(((a*i)%m) == 1){
			return i;
		}
	}

	return -1;
}
int simpleEuclidTheorem(int a,int b){
	// Time Complexity: O(Log min(a, b))
	if(b == 0){
		return a;
	}
	return simpleEuclidTheorem(b,a%b);
}
// Extended Euclidean Algorithm: 
// Extended Euclidean algorithm also finds integer coefficients x and y such that:

//   ax + by = gcd(a, b) 
// Examples:

// Input: a = 30, b = 20
// Output: gcd = 10
//         x = 1, y = -1
// (Note that 30*1 + 20*(-1) = 10)

// Input: a = 35, b = 15
// Output: gcd = 5
//         x = 1, y = -2
// (Note that 10*0 + 5*1 = 5)
// For extended Euclid (https://www.youtube.com/watch?v=fz1vxq5ts5I)
int extendedEuclidTheorem(int a,int b,int* x,int* y){

	if(a == 0){
		*x = 0;
		*y = 1;
		return b;
	}

	int x1,y1;
	int gcd = extendedEuclidTheorem(b%a,a,&x1,&y1);

	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;

}
int moduloInverseExtendedEuclid(int a,int m){
	int x,y;
	int g = extendedEuclidTheorem(a,m,&x,&y);
	if(g != 1){
		return -1;
	}
	int res = ((x%m)+m)%m; // it also handles the case when x will be negative
	return res;
}

// Method 3 (Works when m is prime)
// If we know m is prime, then we can also use Fermats’s little theorem to find the inverse.

// am-1 ≡ 1 (mod m)  
// If we multiply both sides with a-1, we get

//  a-1 ≡ a m-2 (mod m)
int power(int x, unsigned int y, unsigned int m)
{
	// fast exponentiation
    if (y == 0)
        return 1;
    int p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}

int moduloInverseFermatLittle(int a,int m){
	// Fermat's Little Theorem (https://www.youtube.com/watch?v=pMA-dD-KCWM)
	int g = simpleEuclidTheorem(a,m);
	if(g != 1){
		return -1;
	}
	return power(a,m-2,m);
}
int main(){

	fastio;
	fastcin;	
	
    
    freopen("small_input.txt", "r", stdin);
    
    freopen("small_output.txt", "w", stdout);



	int a,m,x,y;
	cin>>a>>m;

	// cout<<simpleEuclidTheorem(10,8)<<endl;
	// cout<<extendedEuclidTheorem(10,8,&x,&y);
	cout<<moduloInverseNaive(a,m)<<endl;
	cout<<moduloInverseExtendedEuclid(a,m)<<endl;
	cout<<moduloInverseFermatLittle(a,m);
}