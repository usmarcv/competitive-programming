#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;


int n, pass;
string s;

int main(){_	
	
	cin >> n;
	while(n--){
		
		cin >> s >> pass;
		
		for(int i = s.size(); i--;){
				//cout << "Esse é o meu i ( " << i << ")" <<endl; 
				s[i] = ((s[i] - 65 - pass) + 26) ;
				s[i] = (s[i] % 26) + 65; 
		}
	
		cout << s << endl;

	}

	return 0;

}

