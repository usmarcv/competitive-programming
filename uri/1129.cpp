#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int n, cor, cont = 0, ans = 0;

	while((cin >> n) && n){
		while(n--){
			cont = 0;
			for(int i = 0; i < 5; i++){
					cin >> cor;
					if(cor < 128){
							ans = i;
							cont++;
					}
			}
			printf("%c\n",((cont == 1) ? 'A'+ans : '*'));
		}
	}


	return 0;

}

