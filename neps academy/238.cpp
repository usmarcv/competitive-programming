#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int charToInt(char c){
	return c - '0';
}

int main(){_

	string s;
	cin >> s;

	cout << ((charToInt(s.back()) % 2 == 0) ? "S\n" : "N\n");

	int ans = 0;
	for(int i = 0; i < s.size(); i++){
			ans += charToInt(s[i]);
	}

	cout << ((ans % 3 == 0) ? "S\n" : "N\n");
	
	cout << ((charToInt(s.back()) % 5 == 0) ? "S\n" : "N\n");

	return  0;

}

