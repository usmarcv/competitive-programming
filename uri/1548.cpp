#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;


#define MAX 1234

int main(){_
	
	int n, m, p[MAX], aux[MAX];

	cin >> n;
	while(n--){

		cin >> m;
		
		int ans = 0;
		memset(p, 0, sizeof(0));
		for(int i = m; i--; ){
			cin >> p[i];
			aux[i] = p[i];
		}
	
		sort(p, p+m);

		for(int i = m; i--; ){
				if(p[i] == aux[i]) ans++;
		}
		
		cout << ans << endl;

	}
	

	return  0;

}

