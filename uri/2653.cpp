#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	set <string> s;
	string ss;

	while(cin >> ss){
		s.insert(ss);	
	}
	cout << s.size() << endl;

	return 0;

}

