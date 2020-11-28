#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int pinos[1123];
	int n, m;
	
	cin >> n >> m;		
	memset(pinos, 0, sizeof(pinos));
		
	for(int i = 0; i < n; i++){
			cin >> pinos[i];
	}

	int ans = 0;
	for(int i = 1; i <= n; i++){
			if(m >= pinos[i - 1]){//MAIOR
				pinos[i] += (m - pinos[i - 1]);
			}else pinos[i] -= (pinos[i - 1] - m);

			ans += abs(m - pinos[i - 1]);
	}

	cout << ans << endl;


	return 0;

}

