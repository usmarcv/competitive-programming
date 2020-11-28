#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;


int n, k, m;

int main(){_

	cin >> n >> k >> m;
	
	ll a[n + 1], f[k + 1];

	for(int i = 1; i <= n; i++){
			cin >> a[i];
	}

	for(int i = 1; i <= n ; i++){
			cin >> f[i];
	}

	for(int i = n + 1; i <= k; i++){
			f[i] = 0;
			for(int j = 1; j <= n; j++){
					f[i] += (a[j] * f[i - j]) % m;
			}
	}

	cout << (f[k] % m) << endl;

	return 0;

}

