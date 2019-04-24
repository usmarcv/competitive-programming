#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, cont = 0;
	string s1, s2;
	ll a, b, resp;
	
	cin >> n;
	while(n--){
		cont++;
		cin >> s1 >> s2;
		a = stoll(s1, 0, 2);  b = stoll(s2, 0, 2);
		resp = __gcd(a,b);
		cout << "Pair #"<<cont<<": ";
		if(resp == 1) cout << "Love is not all you need!\n";
		else cout << "All you need is love!\n";
	}

	return 0;
}

