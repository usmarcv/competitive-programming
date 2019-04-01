#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Complexity of O(sqrt(n))
bool isPrime(ll n){
	if(n < 0) return isPrime(-n);
	for(ll i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}
