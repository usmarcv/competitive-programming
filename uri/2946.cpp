#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string binario;
	int casos, num;
	ll r;
	multiset <int> numeros;

	cin >> binario >> casos;
	while(casos--){
		cin >> num;
		r = 0LL;
		for(int i = 0; i < int(binario.size()); i++){
				r = (r * 2 + int(binario[i]) - 48) % num;
		}
		if(r == 0) numeros.insert(num);
		else continue;
	}

	if(numeros.empty()){
		printf("Nenhum\n");
	}else{
		auto it = numeros.begin();
		cout << *it;
		for(++it; it != numeros.end(); ++it){
			cout << " " << *it;
		}
		cout << endl;
	}
	
	return 0;

}

