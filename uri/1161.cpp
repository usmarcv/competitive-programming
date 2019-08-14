#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long fat0, fat1;
	short m, n;
	
	while(cin >> m >> n){
		fat0 = 1; fat1 = 1; 
		for(int i = 1; i <= m; i++){
				fat0*=i;
		}
		for(int k = 1; k <= n; k++){
				fat1*=k;
		}
		cout << fat0+fat1 << "\n";
	}

	return 0;

}
