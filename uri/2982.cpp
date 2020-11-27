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
	
	int ans = 0;
	while(n--){
		char s;int v;
		cin >> s >> v;
		
		if(s == 'V') ans+=v;
		else ans-=v;
	}
	
					cout << ((ans > 0) ? "A greve vai parar.\n": "NAO VAI TER CORTE, VAI TER LUTA!\n");
	return 0;

}

