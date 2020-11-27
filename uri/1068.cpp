#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_


	string s;
	
	while(cin >> s){
	int esq = 0, dir = 0;
		for(int i = 0; i < s.size(); i++){
				if(s[i] == '(') esq++;
				else if(s[i] == ')'){
								dir++;
								if(esq > 0){
									esq--; 
									dir--;
								}
				}
		}

		if(esq == 0 && dir == 0)	cout << "correct" << endl;
		else cout << "incorrect" << endl;

	}

	return 0;

}

