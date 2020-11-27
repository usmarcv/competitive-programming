#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	int n;

	scanf("%d",&n);

	if(n >= 1 and n < 36) cout << "D\n";
	else if(n >= 36 and n < 61) cout << "C\n";
	else if(n >= 61 and n < 86) cout << "B\n";
	else if(n >= 86 and n < 100) cout << "A\n";
	else if(n == 0) cout << "E\n";
	
	return 0;

}

