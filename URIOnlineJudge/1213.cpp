#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, um, ans;
	
	while(scanf("%lld",&n) != EOF){
			um = ans = 1;
			while((um % n) != 0){
				um = ((10 * um) + 1) % n;
				ans++;
			}
			printf("%lld\n",ans);
	}

	return 0;
}

