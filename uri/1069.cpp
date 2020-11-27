#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	string s;	
	int n;

//	bool esq = false;
//	bool dir = false;
	int ans, esq, dir;

	cin >> n;
	while(n--){
		cin >> s;
		for(int i = ans = esq = 0; i < s.size(); i++){
				if(s[i] == '<'){
						esq++;
				}else if(s[i] == '>' && esq){
						ans++;
						esq--;
				}
		}
		cout << ans << endl;
	}

	return 0;

}

