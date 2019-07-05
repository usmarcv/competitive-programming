#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int n, numero, ans = 0;
	char pe;
	vector <pair<int, char>> v;
	
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> numero >> pe;
			v.push_back(make_pair(numero, pe));
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
				if(find(v.begin(), v.end()) == v.end()){
						ans++;
				}
		}
		cout << ans << endl;
		ans = 0;
	}

	return 0;

}

