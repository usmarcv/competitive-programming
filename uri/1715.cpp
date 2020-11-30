#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n, m;

	cin >> n >> m;
	
	int ans = 0, flag;
	for(int i = 0; i < n; i++){
		flag = 1;
		for(int j = 0; j < m; j++){
				int nn;
				cin >> nn;
				flag *= (nn != 0);	
		}
		ans += flag;
	}
	
	cout << ans << endl;

	return  0;

}

