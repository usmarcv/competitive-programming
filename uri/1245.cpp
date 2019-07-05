#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;

int main(){_
  
  int n, tam, ans = 0;
	char pe;

  while (cin >> n) {
		vector <int> D(112), E(112);
		for(int i = 0; i < n; i++){
      	cin >> tam >> pe;
				if(pe == 'D')
					 D[tam]++;	
					else E[tam]++;
    }
		ans = 0;
    for(int i = 0; i < 112; i++)
     		 ans += min(D[i], E[i]);
		 cout << ans << endl;
  }

  return 0;
}
