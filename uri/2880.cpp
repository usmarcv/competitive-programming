#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	string m, crib;

	int ans = 0, flag = 0;

	cin >> m >> crib;
	for(int i = 0; i < (m.size() - crib.size()) + 1; i++){
			cout << m[i] " ";
			flag = 1;
		for(int j = 0; j < crib.size(); j++){
			if(crib[j] == m[i + j]){
				flag=0; 
				break;
			}
		}
		ans += flag;
	}

	cout << ans << endl;

	return 0;

}
