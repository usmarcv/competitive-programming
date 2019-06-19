#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	int p, c, n;
	scanf("%d %d %d",&p, &c, &n);
	
	int vet[n+10], sum = p + c, ans = 0;

	for(int i = 0; i < n; ++i){
			scanf("%d", &vet[i]);
	}
	if(vet[0] < sum) sum = vet[0];
	for(int i = 1; i < n; ++i){
			if(vet[i] < p) break;
			if(vet[i] < sum){
				ans++;
				sum = vet[i];
			}
	}
	printf("%d\n",ans);
	
	return 0;

}

