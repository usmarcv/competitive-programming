#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int n, ans = 0, i;
	int	f[8] = {1, 2, 6, 24, 120, 720, 5040, 40320}; //fats N(1<= N <=10⁵)

	cin >> n;
	while(n){
			for(i = 8; i--; ){		
					if(f[i] <= n){
						n = n - f[i];
						break;
					}
			}	
			++ans;
	}
	cout << ans << endl;

	return 0;

}

