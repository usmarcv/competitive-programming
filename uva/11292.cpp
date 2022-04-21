#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main(){_

	int dragons, knights;

	while(cin >> dragons >> knights && dragons && knights){

		int d[dragons];
		for(ll i = 0; i < dragons; ++i){
					cin >> d[i];
		}

		int k[knights];
		for(ll i = 0; i < knights; ++i){
					cin >> k[i];
		}

		sort(d, d + dragons);
		sort(k, k + knights);

		int ans = 0, i, j;
		for(i = 0, j = 0; i < dragons and j < knights; j++){
				if(d[i] <=  k[j]){
					ans += k[j];
					i++;
				}
		}
		
		if(i < dragons) cout << "Loowater is doomed!" << endl;
		else cout << ans << endl;
	}

	
  return 0;
}


