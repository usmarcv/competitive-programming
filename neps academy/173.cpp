#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int n, k, casas[100002];

int buscaBinaria(int x){
	
	int ini = 1, fim = n - 1, ans = 0;
	while(ini <= fim){
		int meio = (ini + fim)/2;
		
		if(casas[meio] == x)	return true;
		
		if(casas[meio] < x){
			ini = meio + 1;
		}else{
			fim = meio - 1;
		}
	}

	return false;

}


int main(){_
	

	cin >> n;

	memset(casas, 0, sizeof(casas));

	for(int i = 0; i < n; i++){
			cin >> casas[i];
	}
	
	cin >> k;
	int mid = 0;
	
	while(true){
		if(buscaBinaria(k - casas[mid])){
			cout << casas[mid] << " " << (k - casas[mid]) << endl;
			break;
		}
		mid++;
	}

	return 0;

}
