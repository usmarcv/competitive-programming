#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main(){_

	string s;

	cin >> s;

	for(int i = 0; i < s.size(); ++i){	
		
		if(s[i] == tolower(s[i])){
		
			printf("%c", toupper(s[i]));

		}else if(s[i] == toupper(s[i])){
		
			printf("%c", tolower(s[i]));
		}
	}

  return 0;
}


