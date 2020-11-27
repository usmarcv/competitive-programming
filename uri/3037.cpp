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
	
	int pontos[2];
	
	while(n--){
		
		int x, d;
		for(int i = 0; i < 3; i++){
				cin >> x >> d;
				pontos[0] += x * d;
		}
		
		for(int i = 0; i < 3; i++){
				cin >> x >> d;
				pontos[1] += x * d;
		}

		cout << ((pontos[0] > pontos[1] ? "JOAO\n" : "MARIA\n"));
		pontos[0] = 0; 
		pontos[1] = 0;
	}

	return 0;

}

