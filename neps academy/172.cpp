#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

#define MAX 11234

struct compromisso{
	int ini, fim;
};

bool compara(compromisso a, compromisso b){
	return a.fim < b.fim;
}

compromisso consulta[MAX];
int N, x, y, livre, ans;

int main(){_
	
	cin >> N;
	for(int i = 1; i <= N; ++i){
			cin >> consulta[i].ini >> consulta[i].fim;		
	}

	sort(consulta + 1, consulta + N + 1, compara);

	for(int i = 1; i <= N; i++){
			if(consulta[i].ini >= livre){
			ans++;
			livre = consulta[i].fim;
			}
	}

	cout << ans << endl;

	return 0;

}

