#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main(){_
	
	int casos, x, num, ans;
	set <int> numeros;
		
	cin >> casos;
	while(casos--){
		cin >> x;
		for(int i = 0; i < x; i++){
				cin >> num;
				numeros.insert(num);
		}
			ans = numeros.size();
			cout << ans << endl;
			ans = 0;
			numeros.clear();
		}
			
	return 0;

}

