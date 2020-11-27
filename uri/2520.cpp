#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n, m, nn, l, l2, c, c2;

	while(cin >> n >> m){

		for(int i = n; i--;){
			for(int j = m; j--;){
					cin >> nn;
					if(nn == 1){
							l = i;
							c = j;
					}else if(nn == 2){
							l2 = i;
							c2 = j;
					}
			}
		}

		cout << abs(l - l2) + abs(c - c2) << endl;

	}

	return 0;

}

