#include <bits/stdc++.h>
#define endl '\n' 
using namespace std;

typedef unsigned long long ull;

ull hammingDistance(ull x, ull y) {
   return bitset<64>(x^y).count();
}

int main(){
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ull x, y;
	x = y = 0ULL;

	while((cin >> x >> y) && x != 0ULL){		
		cout <<	hammingDistance(x,y) << endl;
	}

	return 0;
}

