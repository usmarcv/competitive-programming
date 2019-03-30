#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string cryp;
	
	cin >> n;
	while(n--){
		cin >> cryp;
		for(int i = cryp.length() - 1; i >= 0; i--){
			if(cryp[i] >= 97 && cryp[i] <= 122){
				cout << cryp[i];
			}
		}
		cout << "\n";
	}


	return 0;
}
