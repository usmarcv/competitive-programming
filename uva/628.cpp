#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


int n; //number of words
string rules; // rules
string saida[312];
string numbers[10] = {"0","1","2","3","4","5","6","7","8","9"};
string words[112];

void Imprime(int pos){
	
	int r = rules.size();
	if(pos == r){
			for(int i = 0; i < pos; ++i){
					cout << saida[i];
			}

			cout << endl;

	}else{
		if(rules[pos] == '#'){
			for(int i = 0; i < n; ++i){
					//cout << words[i];
					saida[pos] = words[i];
					Imprime(pos + 1);
			}
		}else{
			for(int i = 0; i < 10; ++i){
					saida[pos] = numbers[i];
					Imprime(pos + 1);
			}
		}
	}
}


int main(){_
	

	while(cin >> n){
		
		for(int i = 0; i < n; ++i){
				cin >> words[i];
		}

		cout << "--" << endl;
		
		int m; //number of rules
		cin >> m;

		while(m--){
				cin >> rules;
				Imprime(0);
		}	
	}

	return 0;

}

