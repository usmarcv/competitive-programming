#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(){_

	//char s[1123];
	string s;
	int flag = 1;

	while(getline(cin, s)){
		for(int i = 0; i < s.size(); i++){
			
				if(s[i] == '"'){
						if(flag)
							printf("``");
						else
							printf("''");
					
						flag = !flag;
			
				}else{
					printf("%c", s[i]);
				}
		}
		printf("\n");
	}

	return  0;

}

