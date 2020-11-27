#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n;
	cin >> n;

	int ans = 0;
	int aux = n;
	while(n--){
		string s; char c;
		cin >> s >> c;
		if(c == 'F') ans++;
	}
	
	cout << abs(aux - ans) << " carrinhos\n";
	cout << ans << " bonecas\n";

	return 0;

}

