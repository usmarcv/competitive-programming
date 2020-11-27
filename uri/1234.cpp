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

	while(getline(cin, s)){

		int dancando = 0;		
		for(int i = 0; i < s.size(); i++){
				if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 127 ){
					if(dancando % 2 == 0) 
						s[i] = toupper(s[i]);
					else s[i] = tolower(s[i]);
					
					dancando++;
		
				}
		}
		
		cout << s << endl;
		
	}

	return 0;

}

