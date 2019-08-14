#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main(){

	int n,m;
	while(cin >> n >> m){
		vector <int> vet(n);
		for(int i = 0 ; i < n ; ++i)
			cin >> vet[i];
		int k = 1;
		int soma = 0;
		for(int i = vet.size() -1; k <= m ; --i){
			soma+=vet[i];
			k++;
		}

		cout << soma << "\n";	
	}

	return 0;

}

