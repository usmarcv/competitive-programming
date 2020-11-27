#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	string s;
	int flag;
	char prim;
	
	while(getline(cin, s) && s != "*"){
		flag = 1;
		prim = tolower(s[0]);
		for(int i = 1; i < s.size(); i++){
				if(s[i] == ' ' && tolower(s[i + 1]) != prim){
					flag = 0;
				}
		}
		cout << (flag ? "Y" : "N") << endl;	
		
	}
	
	return 0;

}

