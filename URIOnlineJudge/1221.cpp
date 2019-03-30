#include <bits/stdc++.h>
using namespace std;

#define ll long long 
bool PRIMEPORRA(ll x){
	if(x < 0) x = -x;
	if(x < 5 or x % 2 == 0 or x % 3 == 0){
			return (x == 2 || x == 3);
	}
	ll MAXPRIME = sqrt(x) + 2;
	for(ll k = 5; k < MAXPRIME; k+=6){
			if(k < x and x % k == 0) return false;
			if(k + 2 < x and x % (k+2) == 0) return false;
	}
	return true;
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, i = 1, k;

	cin >> n;
	while(i <= n){
			i++;
			cin >> x;
			if(PRIMEPORRA(x)){
				 cout <<"Prime" << "\n";
			}else
				 cout << "Not Prime" << "\n";
	}

	return 0;
}
