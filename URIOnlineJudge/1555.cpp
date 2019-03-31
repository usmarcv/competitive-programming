#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	short n, x, y;
	ll calc[3], maior = 0;

	cin >> n;
	while(n--){
	
		cin >> x >> y;
	  
		calc[0] = (3 * x * x * 3) + (y * y);
	  calc[1] = 2 * ( x * x ) + (5 * y * y * 5);
 	  calc[2] = (y * y * y) - (100 * x);
		maior = calc[0];
		
		for(int i = 1; i < 3; i++){
				if(calc[i] > maior){
						maior = calc[i];
				}
		}
		
		if(calc[0] == maior) cout << "Rafael ganhou" << "\n";
		else if(calc[1] == maior) cout << "Beto ganhou" << "\n";
		else if(calc[2] == maior) cout << "Carlos ganhou" << "\n";
	
	}


	return 0;
}

