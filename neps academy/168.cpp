#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

#define ll long long

int main(){_

	int n, m;
	cin >> n >> m;
	
	int a[112345];
	memset(a, 0, sizeof(a));

	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = 1; i <= n; i++){
			if(min(a[i], m - a[i]) >= a[i - 1]){
					a[i] = min(a[i], m - a[i]);
			
			}else if(max(a[i], m - a[i]) >= a[i - 1]){
								a[i] = max(a[i], m - a[i]);
			}else{
				cout << "-1" << endl;
				return 0;
			}
	}

	ll ans = 0;
	for(int i = 1; i <= n; i++){
			ans += a[i];
	}

	cout << ans << endl;
					
	return 0;

}

