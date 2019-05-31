#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;

int main(){__
	
	cin >> s;
	
	sort(s.begin(), s.end());
	auto rep = unique(s.begin(), s.end());
	s.erase(rep, s.end());
	
	if(s.length() % 2 == 0) 
		cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;

	return 0;
}

