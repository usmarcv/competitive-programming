#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){__
	
	ll t, n, x, y;
	short v[112];
	cin >> t;
	
	while(t--){
		
		cin >> n >> x >> y;
		
		for(int i = 0; i < n; i++) cin >> v[i];
		//primeira e última posição.
		if(v[0] == x and v[n-1] == y) cout << "BOTH";
		if(v[0] == x and v[n-1] != y) cout << "EASY";
		if(v[0] != x and v[n-1] == y) cout << "HARD";
		if(v[0] != x and v[n-1] != y) cout << "OKAY";
		cout << endl; 

	}

	return 0;

}

