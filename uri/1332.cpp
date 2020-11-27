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
		string s;
		cin >> s;
		if(s.size() == 3){
				cout << ((s[0] != 't') + (s[1] != 'w') + (s[2] != 'o') <= 1 ? "2\n": "1\n"); 
		}else cout << "3\n";
	}
	
	return 0;

}

