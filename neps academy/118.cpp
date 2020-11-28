#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	string n, ans, rev;
	cin >> n;
	
	ans = "";
	for(int i = 0; i < n.size(); ++i){
			if (n[i] == 'a' or n[i] == 'e' or n[i] == 'i' or n[i] == 'o' or n[i] == 'u' )
			ans+=n[i];
	}
	
	rev = ans;
	reverse(rev.begin(), rev.end());
	
	cout << (ans == rev ? "S" : "N") << endl;

	return 0;

}
#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_


	return  0;

}

