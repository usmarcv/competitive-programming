#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_


	int a[5], ans = 0, min = 1000000000, max = 0;
	for(int i = 0; i < 5; i++){
			cin >> a[i];
	}
	for(int i = 0; i < 5; i++){
			ans += a[i];
			if(a[i] > max) max = a[i];
			if(a[i] < min) min = a[i];
	}
	
	cout << ans-max << " "  << ans-min << endl;

	return 0;

}

