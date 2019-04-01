#include <bits/stdc++.h>
#define ll long long 
using namespace std;

//Complexity of O(sqrt(n))
bool isPrimeFast(ll n){
	if(n < 0){n = -n;}
	if(n < 5 || (n % 2) == 0 || (n % 3) == 0){
		return (n == 2 || n == 3);
	}
	ll maxPrime = (sqrt(n) + 2);
	for(ll p = 5; p < maxPrime; p += 6){
		if(p < n && n % p == 0 ) return false;
		if(p + 2 < n && n % (p + 2) == 0) return false;
	}
	return true;
}
