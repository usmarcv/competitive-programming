#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	int n, num, ans = 0;
	string azar;

	cin >> n >> azar;
	cin >> num;
	string str[num + 10];

	for(int i = 0; i < num; ++i){
			cin >> str[i];
	}
	for(int i = 0; i < n; ++i){
		vector <int> v(100);
		for(int j = 0; j < num; j++){
				if(str[j][i] != azar[i]){
					v[str[j][i]]++;
				}
		}
		sort(v.rbegin(), v.rend());
		ans += v[0];
	}
	printf("%d\n",ans);
		
	return 0;
}


