#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


int main(){_

  char s;
	long long number = 131071, ans = 0L;
	
	while(cin >> s){
		
		if(s == '#'){
			
			if(ans == 0){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;	
			}
			ans = 0;

		}else{

			if(s != '\n'){
					ans = (ans * 2 + s - 48) % number;
			}
		}

	}


	return 0;

}

