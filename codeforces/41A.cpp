#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s, t;

int main(){__
	
	cin >> s >> t;

	reverse(t.begin(), t.end());

	if(s == t) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

