/*#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main(){_

	string s;

	cin >> s;
	
	int ans = 0;
	int flag = 0;
	for(int i = s.size() - 1; i >= 0; i--){
				
			if(s[i] == ' ' && flag == 0){
					continue;
			}

			if(s[i] != ' '){
					flag = 1;
					ans++;
			}else break;
			
	}

	cout << ans << endl;

  return 0;
}

*/


class Solution {
public:
    int lengthOfLastWord(string s) {
				
				int ans = 0;
				int flag = 0;
				for(int i = s.size(); i >= 0; i--){
						if(s[i] == ' ' && flag == 0){
								continue;
						}
						if(s[i] != ' '){
								flag = 1;
								ans++;
						}else break;
				}

				return ans;
    }
};
