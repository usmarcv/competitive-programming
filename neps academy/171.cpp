#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int moedas[] = {1, 5, 10, 25, 50, 100};
	int n; 
	
	cin >> n;
	int ans = 0;

	for(int i = 6; i >= 0; i--){
			ans += n/moedas[i];
			n = n %  moedas[i];
	}

	cout << ans << endl;

	return 0;

}

