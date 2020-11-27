#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int v, n;

	cin >> v >> n;

	for(int i = 1; i < 10; ++i){
			if(((i * v * n) % 10))
					cout  << (((i * v * n)/10) + 1);
			else cout << ((i * v * n) / 10);
			if (i < 9) cout << " ";
			else cout << endl;
	}


	return 0;

}

