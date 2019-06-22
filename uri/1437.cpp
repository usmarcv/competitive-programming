#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	char s, ans[4] = {'N', 'L', 'S', 'O'};
	int n, cont = 0, pos;

	while(cin >> n && n){
		pos = 0;
		while(n--){
			cin >> s;	
			pos = (((pos + (s == 'D' ? 1 : -1))+ 4) % 4);
		}
			cout << ans[pos] << endl;
	}
	return 0;

}

