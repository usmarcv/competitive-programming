#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, casos = 1, entrada;

int josephus (int n, int k){
	
	if(n == 1) return 1;
	else{
		 return(josephus(n - 1, k) + k - 1) % n + 1;
	}
}

int main(){_

	scanf("%d",&entrada);
	while(entrada--){
		scanf("%d %d",&n, &k);
		printf("Case %d: %d\n",casos, josephus(n,k));
		casos++;
	}

	return 0;

}

