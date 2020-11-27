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
	while(n--){
		
		int t;
		cin >> t;
		int tiros[t];

		for(int i = 0; i < t; i++){
				cin >> tiros[i];;
		}

		string s;
		cin >> s;

		int ans = 0;
		for(int i = 0; i < t; i++){
				if(s[i] == 'S'){
					if(tiros[i] < 3) ans++;
				}else if(tiros[i] > 2) ans++;
		}

		cout << ans << endl;
	
	}

	return 0;

}

