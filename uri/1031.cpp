#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;


int n, m;

int josephus(int n, int m){
	if(n == 1) 
		return 1;
	else
		return (josephus(n - 1, m) + m - 1) % n + 1;
}


int main(){_
	
	while(cin >> n && n){
		m = 1;
		while(1){
			if(josephus(n - 1, m) == 12) break;
			else m++;
		}
		cout << m << endl;

	}
	
	return 0;

}

