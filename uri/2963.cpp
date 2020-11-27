#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int n, nn, votos[112345];

	cin >> n;
	for(int i = 0; i < n; ++i){
			cin >> votos[i];
	}

	int prim = votos[0];

	sort(votos, votos+n);

	if (prim >= votos[n-1])
			cout << "S" << endl;
	else cout << "N" << endl;

	return 0;

}

