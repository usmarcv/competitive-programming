#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
using namespace std;

#define MAX 100500

int n, m;
int a[MAX], forcas[MAX];

int buscaBinaria(int x){
	
	int ini = 1, fim = n-1, ans = 0;
	while(ini <= fim){
		int meio = (ini + fim)/2;
		if(x >= a[meio]){
			ans = meio;
			ini = meio+1;
		}else{
			fim = meio-1;
		}
	}

	return ans;
}

int main(){_

	cin >> n >> m;

	for(int i = 1; i < n; i++){
			cin >> a[i];
	}

	for(int i = 0; i < n; i++){
			cin >> forcas[i];
	}
	
	int o, pos;
	for(int i = 0; i < m; i++){
			cin >> o;
			pos = buscaBinaria(o);
			cout << forcas[pos];

			if(i == m - 1) cout << endl;
			else cout << ' ';
	
	}

	return 0;

}

