#include <bits/stdc++.h>
using namespace std;

struct pessoa{
	string nome, tam, cor;
};

int compare (pessoa a, pessoa b){
	if(a.cor == b.cor){
		if(a.tam == b.tam){
			return a.nome < b.nome;
		}else{
			return a.tam > b.tam;
		}
	}else{
		return a.cor < b.cor;
	}
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	pessoa p[60];
	int n;

	cin >> n;
	while(n){

		if(n == 0){ break;}
		
		for(int i = 0; i < n; i++){
			cin.get();
			getline(cin,p[i].nome);
			cin >> p[i].cor >> p[i].tam;
		}

		stable_sort(p, p + n, compare);
		
		for(int i = 0; i < n; i++){	
			cout << p[i].cor << " " << p[i].tam << " " <<  p[i].nome <<"\n";
		}		

		cin >>n;
		if(n != 0){cout << "\n";}
	}	

	return 0;
}

