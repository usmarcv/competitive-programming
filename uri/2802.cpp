#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long  n, ans;

	scanf("%lld",&n);
	ans = 1 + (((n * (n-1))/2) + (((n) * (n-1) * (n-2) * (n-3))/24));
	printf("%lld\n",ans);

	return 0;
}

