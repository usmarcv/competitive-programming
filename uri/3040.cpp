#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n;
	cin >> n;

	while(n--){
		int h, d, g;
		cin >> h >> d >> g;
		cout << (((h >= 200 && h <= 300) && (d >= 50) && (g >= 150)) ? "Sim\n" : "Nao\n");
	}
	return 0;

}

