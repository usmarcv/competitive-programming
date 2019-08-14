#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string a, b;

int main(){__
		
	cin >> a >> b;

	if(abs(a[0] - b[0]) == 1 && abs(a[1] - b[1]) == 2)
			cout << "VALIDO" << endl;
	else if(abs(a[0] - b[0]) == 2 && abs(a[1] - b[1]) == 1) 
			cout << "VALIDO" << endl;
	else cout << "INVALIDO"<< endl;

	return 0;

}

