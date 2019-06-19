#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int v[5] = {300, 1500, 600, 1000, 150};
	int num, soma = 225;

	for(int i = 0; i < 5; ++i){
			scanf("%d", &num);
			soma += v[i] * num;
	}

	printf("%d\n", soma);

	return 0;

}

