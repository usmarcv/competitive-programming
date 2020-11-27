#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_
	
	short m, a, b, ans;

	cin >> m >> a >> b;
	ans = m - a - b;

	if(ans > a and ans > b) cout << ans << endl;
	else if(a > b and a > ans) cout << a << endl;
	else cout << b << endl;

	return 0;

}

