#include <bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	short c, b, p, c2, b2, p2, ans = 0;

	cin >> c >> b >> p >> c2 >> b2 >> p2;

	if(c2 > c) ans += c2 - c;
	if(b2 > b) ans += b2 - b;
	if(p2 > p) ans += p2 - p;

	cout << ans << "\n";

	return 0;
}
