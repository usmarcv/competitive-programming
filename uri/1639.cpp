#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;

	while(cin >> n and n){
		long long num = n;
		int cont = 0;
		set <long long> vet;
		
		vet.insert(n);

		while(true){
			num *= num;

			++cont;
			string a = to_string(num);

			string aa;
			if(int(a.size()) < 8){
				for(int i = 0; i < 8 - int(a.size()); i++)
					aa += '0';
				aa += a;	
			}
			else aa = a;

			a = aa.substr(2, 4);

			num = stoi(a);
			if(vet.find(num) != vet.end())
				break;
			vet.insert(num);

		}

		cout << cont << endl;
	}

	return 0;
}

