#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n, d;
	double ans, t;

	while(cin >> n){
		ans = 0.0;
		for(int i = 1; i <= n; i++){
					cin >> t >> d;
					if((d/t) > ans){
						ans = d/t;
						cout << i << endl;
					}
		}
	}

	return 0;

}

