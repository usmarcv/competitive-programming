#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int j, r, num, maior = 0;
  int v[501];	

	memset(v, 0, sizeof(v));

	scanf("%d %d", &j, &r);
	int nn = j * r;
	for(int i = 0; i < nn; i++){
			scanf("%d",&num);
			v[i % j] += num;
			if(v[i % j] >= v[maior]){	
					maior = i % j;
			}
	}
	
	printf("%d\n",++maior);

	return 0;

}

