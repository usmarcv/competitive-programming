#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	short t, n, ni, i = 0;
	int vet[12];
	memset(vet, 0, sizeof(vet));
		
	cin >> t;
	while(t--){
		i++;
		cin >> n; 
		for(int i = 0; i < n; i++){
				cin >>  vet[i];
		}
		cout << "Case " << i <<": " << vet[n/2] << "\n";
	}
	//é muito simples, no Ceará nós resolvemos assim!
	return 0;
}
