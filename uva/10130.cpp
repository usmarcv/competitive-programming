#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

#define MAX_W 31
int melhorP[MAX_W];

int main(){_

	int t, n;
	
	cin >> t;

	while(t--){
		
		memset(melhorP, 0, sizeof(melhorP));

		cin >> n;

		for(int i = 0; i < n; ++i){
				int p, w;
				cin >> p >> w;
				for(int k = MAX_W - 1; k >= w; --k){
						melhorP[k] = max(melhorP[k], melhorP[k - w] + p);
				}
		}
		
		int ans = 0;
		int pessoas, peso;

		cin >> pessoas;
		for(int i = 0; i < pessoas; ++i){
				cin >> peso;
				ans += melhorP[peso];
		}

		cout << ans << endl;

	}

  return 0;
}


